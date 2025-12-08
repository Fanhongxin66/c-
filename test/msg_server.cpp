#include <iostream>
#include <thread>
#include <string>
#include <functional>
#include <map>
#include <mutex>
#include <queue>
using namespace std;
struct Msg {
    string key;
    string data;
};
class Msgserver {
public:
    //函数封装器
    using MsgCall = function<void(const Msg&)>;
    //根据key关联函数对象
    //注册消息处理回调
    void Reg(string key, MsgCall call) {
        calls_[key] = call;
    }
    void Distribute(const Msg& msg) {
        auto ptr = calls_.find(msg.key);
        if (ptr == calls_.end()) {
            cerr << msg.key << " Dont find the function\n";
            return;
        }
        ptr->second(msg);
    }
    void Send(const Msg& msg) {
        msgs_.push(msg);
    }
    void Stop() {
        is_exit_ = true;
    }
    void Start() {
        th_ = thread(&Msgserver::Run, this);
    }
    void Wait() {
        th_.join();
    }
private:
    //处理业务逻辑主循环
    void Run() {
        while (!is_exit_) {
            if (msgs_.empty()) {
                this_thread::sleep_for(1ms);
                continue;
            }
            Msg msg;
            {
                lock_guard<mutex> lock(mtx_);
                //取出消息队列第一个消息
                msg = msgs_.front();
                msgs_.pop();
            }

            Distribute(msg);
        }
    }
    //根据消息的key值调用函数对象
    map<string,MsgCall> calls_;
    //存储消息
    queue<Msg> msgs_;
    bool is_exit_ = false;
    thread th_;
    mutex mtx_;
};
class HttpServer: public Msgserver {

public:
    void Init() {
        Reg("Post",[this](const Msg& msg) {
            Post(msg);
        });
        Reg("Get",[this](const Msg& msg) {
            Get(msg);
        });
        Reg("Head",[this](const Msg& msg) {
            Head(msg);
        });
    };
    void Post(const Msg& msg) {
        cout << __FUNCTION__ << msg.key << ":" << msg.data <<  endl;
    }
    void Get(const Msg& msg) {
        cout << __FUNCTION__ << msg.key << ":" << msg.data <<  endl;
    }
    void Head(const Msg& msg) {
        cout << __FUNCTION__ << msg.key << ":" << msg.data <<  endl;
    }

};
int main() {
    {
     HttpServer server;
        server.Init();
        server.Send({"Post","test post"});
        server.Send({"Get","test get"});
        server.Send({"Head","test head"});
        server.Start();
        this_thread::sleep_for(3s);
        server.Stop();
        server.Wait();
    }


    // Msgserver server;
    // server.Reg("post",[](const Msg& msg){
    //     cout << "test post msg" <<msg.data << ":" << msg.key << endl;
    // });
    // server.Distribute({"post","good"});
    // server.Send({"post" , "yes"});
    // server.Start();
    // server.Wait();
    return 0;


}
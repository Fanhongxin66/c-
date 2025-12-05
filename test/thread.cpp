#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
class Task {

    public:
    void run() {
        cout << "RUN" << endl;
    }
    void start() {
        th_ = thread(&Task::run,this);
    }
    void wait() {
        if (th_.joinable())
            th_.join();
    }
    private:
    thread th_;
};
int main() {

    Task task;
    task.start();
    task.wait();
    thread th3(&Task::run,&task);
    th3.join();
    thread th_[100];
    static mutex mux_;
    // for (auto &th : th_) {
    //     th = thread([] {
    //         while (true) {
    //             lock_guard<mutex> lock(mux_);
    //             cout << "-------------" << endl;
    //             cout << this_thread::get_id() << endl;
    //      }
    //     });
    // }
    // for (auto &c : th_) {
    //     c.join();
    // }
}
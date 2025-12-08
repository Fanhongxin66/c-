#include  "iostream"
#include "vector"
using namespace std;

//class虚函数
class base {
    public:
    virtual  ~base() {
        cout << "base()" << endl;
    }
    virtual void draw() {
        cout << "base draw" << endl;
    }
};
class first: public base {
    public:
    virtual  ~first() {
        cout << "first()" << endl;
    }
    void draw()override {
        cout << "first draw" << endl;
    }
};
class second: public base {
    public:
    second() {}
    void draw()override {
        cout << "second draw" << endl;
    }
};
class Scene {
public:
    void add(base* p) {
        vec.push_back(p);
    }
    void DrawALL() {
        for (auto c : vec) {
            c->draw();
        }
    }
    ~Scene() {
        for (auto c : vec) {
            delete c;
        }
    }
private:
    vector< base* > vec;
};
//class纯虚函数 不可实例化
class  chunxu {
    virtual void xu() = 0 ;

};
//继承实现后才能实例化。
class insert : public chunxu {
    public:
    void xu() override{
        cout << "insert " << endl;
    }
};
int main() {
    Scene scene ;
    scene.add(new first);
    scene.add(new second);
    scene.add(new base);
    scene.DrawALL();
    insert ins;
    ins.xu();
    cout << "------------------" << endl;
    //把析构函数设置成虚函数，在前面加virtual就可以了
    base* f = new first();
    delete f;
    cout << "------------------" << endl;
}
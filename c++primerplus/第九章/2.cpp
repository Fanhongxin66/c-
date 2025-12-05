#include  <iostream>
//在namespcae里选择需要用的名称空间的操作。
namespace {
    using std::cout;
    using std::endl;
}
//using namespace youyong 就可以正常用cout，endl，cin了。
namespace youyong {
    using std::cout;
    using std::endl;
    using std::cin;
}
namespace student {
    double age;

}
//内部链接。
static int Sum( int a , int b ) {

    return a + b;
}
char buffer[100];
int main() {
    int * p ;
    //从buffer的存储空间里拿出20个int的空间大小分配给20个int
    //new一个是运算符，一个是定位符。
    //下面这句就是定位符，定位buffer的地址。不需要delete来清除，因为是存在静态存储区里的。
    p = new (buffer) int[20];
    //new是运算符。计算需要多大的空间。
    int * q = new int(5);
    delete q;
    cout << p << endl;
    cout << &buffer << endl;


}
#include <iostream>
using namespace std;

void igor() {
    return;
}
float tofu(int) {
    return 0;
}
double mpg(double a ,double b ) {
    return a+b;
}
long  summation(long arr[],int n ) {
    return  0;
}
double doctor(const string str) {
    return 0;
}
struct boss{
    string name;
    int age;
};
void ofcourse(boss &bs) {
    return;
}
int judge(int (*ptr)(const char * )) {
    return 0;
};
struct applicant {
    char name[30];
    int credit_ratings[3];
};
void fun1(applicant a1) {
    cout << a1.name << endl;
    cout << a1.credit_ratings[0] << endl;
    cout << a1.credit_ratings[1] << endl;
    cout << a1.credit_ratings[2] << endl;
}
void fun2(applicant &a2) {
    cout << a2.name << endl;
    cout << a2.credit_ratings[0] << endl;
    cout << a2.credit_ratings[1] << endl;
    cout << a2.credit_ratings[2] << endl;
}
void f1(applicant * a) ;
const char * f2(const applicant * a1,const applicant * a2);
int main() {
    typedef  const char * (*ptr)(const applicant * , const applicant *);
    void (*p1)(applicant *) = f1;
    void (*aq[5])(applicant *){f1,f1,f1,f1,f1};
    const char * (*p2)(const applicant * , const applicant *) = f2;
    ptr pa[10];

}
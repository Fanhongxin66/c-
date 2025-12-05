#include <cstring>
#include <iostream>
using  namespace std;

struct chaff {
    char dross[20];
    int slag;
};


int main() {
    {
        char   buffer[100];
        chaff *ptr = new(buffer) chaff[2];
        strcpy(ptr[0].dross,"Hello World1");
        strcpy(ptr[1].dross,"Hello World2");
        ptr[0].slag=1;
        ptr[1].slag=2;
        cout << ptr[0].slag << endl;
        cout << ptr[1].slag << endl;
        cout << ptr[0].dross << endl;
        cout << ptr[1].dross << endl;

    }
    {
        char  * buffer = new char[100];
        chaff *ptr = new(buffer) chaff[2];
        strcpy(ptr[0].dross,"Hello World3");
        strcpy(ptr[1].dross,"Hello World4");
        ptr[0].slag=3;
        ptr[1].slag=4;
        cout << ptr[0].slag << endl;
        cout << ptr[1].slag << endl;
        cout << ptr[0].dross << endl;
        cout << ptr[1].dross << endl;

    }


}
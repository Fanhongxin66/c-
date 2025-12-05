#include "iostream"
using namespace std;
int main() {
    int *pArr = new int[10]{0,1,2,3,4,5,6,7,8,9};
    int b[10];
    for (int i = 0; i < 10; i++) {
        if (i == 0 || i == 5) {

            continue;
        }
        if (i < 5 && i > 0) {
            b[i-1] = pArr[i];

        }
        if (i > 5) {
            b[i-2] = pArr[i];
        }
    }
    delete[] pArr;
    pArr = b;
    int i = 0;
    // while (pArr[i] != NULL) {
    //     cout << pArr[i++] << endl;
    // }
    struct  Student {
        string name;
        int age = 20;
        int height;

    };
    Student s1[5];
    
}
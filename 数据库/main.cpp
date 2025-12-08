#include "database.h"
#include "iostream"
using namespace std;

int main() {

    while (true){
        int x = GetUSerControl();
        if (x == 1) {
            DataInsert();
        }
        else if (x == 2) {
            DataFind();
        }
        else if (x == 3) {
            DataDelete();
        }
    }
};
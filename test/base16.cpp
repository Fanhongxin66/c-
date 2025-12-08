#include "iostream"
#include "vector"
using namespace std;
constexpr  string base16 = "0123456789ABCDEF";
int main() {
    string s = "HelloWorld!";
    string result;
    cout << s  << endl;
    for (unsigned char c : s) {
        char left = c >> 4;
        char right = c & 0xf;
        result +=base16[left];
        result += base16[right];
    }
    cout << result << endl;
    string str;
    for (int i = 0 ; i < size ; i += 2) {
        char result_left = result [i];
        char result_right = result [i + 1];
        int high = 0, low = 0 ;
        for (int j = 0 ; j < size ; j++) {
            if (result_left == base16[j]) high = j ;
            if (result_right == base16[j]) low = j ;
        }


    }


}
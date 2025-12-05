#include <iostream>
#include <cstring>
using namespace std;
int main() {
    cout << "Enter your first name: ";
    char first_name[10];
    cin >> first_name;
    cout << "Enter your last name: ";
    char last_name[10];
    cin >> last_name;
    char full_name[50];
    strcpy(full_name,last_name);
    strcat(full_name, ",");
    strcat(full_name,first_name);
    cout << "Here is the information in a single string: " << full_name << endl;



}
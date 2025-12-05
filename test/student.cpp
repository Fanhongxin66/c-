#include "iostream"
using namespace std;

void BubbleSort(int arr[], int size) {
    int tem_min , i , j;
    for ( i = 1; i < size;i++) {
        if (arr[i-1] > arr[i]) {
            tem_min = arr[i];
            for ( j = i - 1 ; j >= 0 && arr[j] > tem_min; j--) {
                arr[j+1] = arr[j];
            }
            arr[j+1] = tem_min;
        }
    }
}

int main() {
    int A[] = {8,7,6,5,4,3,2,1};
    BubbleSort(A, sizeof(A)/sizeof(A[0]));
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        cout << A[i] << endl;
    }

}
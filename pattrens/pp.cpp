#include<iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 values:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    return 0;
}
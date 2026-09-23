// *****
// ****
// ***
// **
// *
// Print structuture like this
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>> n ;
// for(int i=1;i<=n;i++){
//     cout << " "<<endl;
//     for(int j = 0 ; j < n-i+1;j++){
//         cout<<"*";
//     }
//     }
//     return 0 ;
// }
// 12345
// 1234
// 123
// 12
// 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>> n ;
for(int i=1;i<=n;i++){
    cout << " "<<endl;
    for(int j = 1; j <=n-i+1;j++){
        cout<< j<< " ";
    }
    }
    return 0 ;
}
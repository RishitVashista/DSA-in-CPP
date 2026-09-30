// print
// *
// **
// ***
// ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int n=100;
// for(int i=1;i<=n;i++){
//     cout << " "<<endl;
//     for(int j = 0 ; j < i;j++){
//         cout<<*;
//     }
// }


//     return 0 ;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>> n ;
for(int i=1;i<=n;i++){

    cout << " "<<endl;
    for(int j = 0 ; j < i;j++){
        cout<<i;
    }
}


    return 0 ;
}                                                   
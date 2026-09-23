// TO PRINT NO. TILL N 
#include <iostream>
using namespace std;
void print (int n){
    int printt = 0 ;
    for(int i=1;i<=n;i++){
         cout<< i << endl ;
    }
}
    int main (){
    int n ;
    cout << "Enter a value for n :\n";
        cin >> n ;
        print(n);
        return 0 ;
}
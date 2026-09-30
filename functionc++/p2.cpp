// Write a function add(int a, int b) that returns sum 
#include<iostream>
using namespace std ;
int sum (int a , int b){
    return a+b;
}
int main(){
    int a ;
    cout<< "Entern a number :" << endl ;
    cin >> a ;
    int b;
    cout<< "Entern a number :" << endl ;
    cin >> b ;
    cout << sum(a,b) ;
      
    return 0 ;
}

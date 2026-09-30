//  Sum of Odd Numbers Between Two Given Numbers
#include<iostream>
using namespace std;

int OddSumBtw2N(int a,int b ){ 
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    } 
    int oddsum=0 ;
    for (int i = a  ; i<= b ;i++){
        if( i % 2 != 0){
oddsum += i ;

        }

    }
    return (oddsum);

} 
int main (){
    int a,b ;
    cout<< "Enter frist number A :" << endl ;
    cin >> a ;
    cout<< "Enter  second number b:" << endl ;
    cin >> b ;
    int n ;
    
   
    cout << OddSumBtw2N(a,b);
return 0 ;
}
// Sum of all even numbers up to N
#include<iostream> 
using namespace std;
int EvenSum(int n){
    int sum = 0 ;
    for(int i = 2 ; i<=n;i++){
         
        if(i % 2 == 0){
            // 
             sum += i ;
        } 
        
    }
    return (sum);
     
}
int main(){
    int n ;
    cout<<"Enter a number for n :\n"  ; 
    cin >> n ;
    cout<< EvenSum(n);
    return 0 ;
}

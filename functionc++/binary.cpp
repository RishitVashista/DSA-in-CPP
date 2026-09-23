// to find  binary no.
#include<iostream>
using namespace std ;
int binaryNum(int num){
    int  ans = 0;
    int pawer = 1 ;
     
 while(num > 0){
      int  rem = num % 2;
    num = num/2;
    ans += (rem * pawer);
    pawer *=10;
}
return ans;
 
}
 int main(){
    int num;
    cout<< "Enter a number for N ";
    cin >> num ;
    cout<< binaryNum(num);
    return 0;
}
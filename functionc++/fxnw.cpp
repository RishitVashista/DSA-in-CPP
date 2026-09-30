// calculate the sum of digit of a number
#include<iostream>
using namespace std ;
int sumd(int num){
    int sum = 0 ;
    while (num>0){
    int lastdigit = num % 10 ;
    num /= 10; 
    sum += lastdigit ;
}
return (sum);
}
int main (){
    int num ;
    cout<< "ENTER A NUMBER WHICH YOU WANT TO ADD the DIGITS : ";
    cin >> num ;
    cout << sumd(num);
    return 0 ;
}
// #include <iostream>
// using namespace std;
// int addition(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }
// int main()
// {
//     cout << addition(8, 9);
//     return 0;
// }
// MINIMUM OF TWO VALUE ::
// #include <iostream>
// using namespace std;
// int minOftwo(int a,int b){
//     if(a>b){
//         return a;

//     }else{
//         return b ;
//     }

// }int main(){
//     cout<< minOftwo(8,7);
//     return 0 ;
// }
#include<iostream>
using namespace std;
int maxmin(int a , int b ){
    if(a>b)
    {
    return a;
    }
    else{
         return b ;
    }
} int main(){
    int a , b ;
    cout<< "Enter a no. for a :\n";
    cin >> a ;
    cout<< "Enter a no. for b :\n";
    cin >> b ;
    cout<< "THE GREATER VALUE IS: " << maxmin(a,b);
    return 0 ; 
}
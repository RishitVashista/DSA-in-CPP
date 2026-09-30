 #include<iostream>
 using namespace std;
 int factorial(int n){
    int fact = 1 ;
    for(int  i =1 ;i<=n ; i++){
        fact *= i ;
    }
    cout<< "FACTORIAL IS EQUAL TO : =" << fact ;
}
    int main (){
        int n ;
         cout << " ENTER A NUMBER FOR N :";
         cin >> n ;
         factorial(n);
         return 0 ;
    
 }
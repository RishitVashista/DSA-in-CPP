//  #include<iostream>
//  using namespace std;
//  int add (int a=10,int b=10){
//     return a+b ;
//  }
//  int main (){
//    cout<< add();
//    return 0;
//  }
  
 #include<iostream>
 using namespace std;
 int diffrence(int a ,int b ){
 return (a-b) ;
 }
 int main (){
  int a ;
  int b ;
  cout<< "Enter a value for a :\n";
  cin>> a ;
   cout<< "Enter a value for b :\n";
  cin>> b ;
  cout<< "Diffrence is equals to : "<< diffrence(a,b);
  return 0 ;
 }
// #include<iostream>
// using namespace std;
// int Diffrence(int a, int b){
//     // fxn creation 
//     // int diffrence= a-b;
//     return a-b;
// }

// int main (){
//     int c , d ;
//     cout<< "ENTer THE VAlue forc and d "<<endl ;
//     cin>> c >> d ;
    
//     // fxn calling
//     // cout << Diffrence(a,b) << endl ; 
//     cout << "Difference is: " << Diffrence(c, d) << endl;  
//     return 0 ;
// }
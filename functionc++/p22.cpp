//  #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 1; i <= 10; i++){
//         if (i == 5){
//             continue;   // skip the rest of this iteration when i == 5
//         }
//         cout << i << endl;
//     }
//     return 0;
// }
#include<iostream>
 using namespace std;

 int main(){
 int i =4;
    if (i % 2==0 ){
        goto label1;
     
    }else{
        goto label2;
    }
    label1:
    cout<< "Even"<< endl;
        return 0 ;
    label2:
    cout<<"Odd" << endl ;
   
     return 0 ;
 }
 
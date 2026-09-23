#include <iostream>
using namespace std;
void greeting()
{
    cout << "Hello sir WElcome\n";
     
}
void greet()
{
    cout << "Hello sir now do this .  .\n ";
    cout<<"                              \n";
    
}
int FAV (){
    int num;
    cout << "Enter YOUr FAv no.\n";
    cin>> num;
    return num ;
}
int add(int a , int b ){
 
return (a+b);
}
int main(){
    greeting();
    cout<< "YOUR FAV NO IS:"<< FAV()<<endl;
    greet();
    int c,d;
 cout<<"ENter a valur for c: \n";
cin>>c ;
cout<<"ENTER  A VALUE FOR D:\n";
cin>> d;
    cout<<"NOW THE SUM OF UR ADDITION IS :"<<add(c,d);
    return 0;
}
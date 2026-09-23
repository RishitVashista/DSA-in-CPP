// the no. only devide by 7 
#include <iostream>
using namespace std;
int multiplication(int x)
{
     
    for (int i = 1; i <= x; i ++)
    {
        if(i%7==0){
            cout << i << endl ;
        }
    }
     
}
int main()
{
    int x;
    cout << "Enter a number ";
    cin >> x;
     multiplication(x)  ;
    return 0;
}
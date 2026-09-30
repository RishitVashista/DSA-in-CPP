#include <iostream>
using namespace std;
int main()
{
    int n=10;
    
    int a ;
    cout << "Enter a  Value For a ";
    cin >> a;
    for(int i = 1 ; i<=n;i++){
        cout<< a <<"*"<< i <<"="<< (a*i) << endl ;
    }
    
    return 0;
}
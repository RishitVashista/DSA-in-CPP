// print 4 line and 4 element in each 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter n "<< endl;
    cin >> n ;
    for(int i=1;i<=n;i++){// outer loop for lines
        cout<< " "<<endl;
        for(int i=1 ; i<=n;i++){// inerloop for row element 
            cout<< i ;
        }
    }
    return 0 ;
}
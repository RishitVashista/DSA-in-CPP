#include <iostream>
using namespace std;
int main()
{
    int a=18;
    // cout << "Enter the value of a " << endl;
    // cin >> a;
    int b;
    cout << "Enter the value of b " << endl;
    cin >> b;
    if(b<=a){
        cout<< "NOt elegible to vote"<< endl;
    }else if(b>=50){
        cout<<"NOT elegible "<<endl;
    }else{
        cout<<"elegible";

    }
    return 0;
}

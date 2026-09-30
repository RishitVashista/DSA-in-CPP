#include<iostream>
using namespace std;
void  explainpair(){
    pair<int,int> p ={1,2};
    cout << p.first << "  " << p.second ;
}
int main(){
    explainpair();
    return 0 ;
}
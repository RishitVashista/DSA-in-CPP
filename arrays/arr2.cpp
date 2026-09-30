// input from user in array
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int array[size];
    for (int u = 0; u < size; u++){
        cin>> array[u];
    }
    for (int u = 0; u < size; u++){
        cout<<"Array is eqauls to : "<< array[u]<< endl ;
    }
        return 0;
}
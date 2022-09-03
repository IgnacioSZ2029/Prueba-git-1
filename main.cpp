#include <iostream>

using namespace std;

int main(){

    int x=25;
    int* ptrX=&x;
    cout<<x<<endl;
    cout<<ptrX<<endl;
    cout<<&x<<endl;
    x=*ptrX;
    cout<<x<<endl;

}
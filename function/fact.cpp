#include<iostream>
using namespace std;

int factorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}
int main()
{
    //  A function is a block of code that can be reused and performs a specific task

        cout <<factorialN(2)<<endl;
        cout <<factorialN(4)<<endl;
        cout <<factorialN(6)<<endl;
        cout <<factorialN(8)<<endl;
        cout <<factorialN(10)<<endl;
    return 0;
}
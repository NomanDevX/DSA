#include <iostream>
using namespace std;

int main() {
    int v;
    cout <<"Enter The Vertical No :";
    cin >>v;
    int h; 
    cout <<"Enter The Horizontal No :";
    cin >>h;
    for(int i=1;i<=v;i++)
    {
       cout<<endl;
        for(int j=1;j<=h;j++)
        {
        cout<< '*' <<"  ";
            
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
 int DecToBinary(int decNum){
     int ans=0 , power=1;
     
     while(decNum>0){
         int rem=decNum%2;
         decNum/=2;
         ans+=(rem*power);
         power*=10;
     }
     return ans;
 }
 int main(){
    //  int decNum=50;
     for (int i=1;i<=10;i++){
     cout<<DecToBinary(i)<<endl;
     }
     return 0;
 }


//I'm just writing these codes for practice.

 
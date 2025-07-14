#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter a number: ";
   cin >> n;
   bool isprime=true;
   for (int i=2;i<=n-1;i++){
       if (n%i==0){
       isprime = false;
       break;}
   }
  if (isprime==true){
      cout<<"This is Prime Number \n";
  }else {
      cout<<"This is not prime \n";
  }

    return 0;
}
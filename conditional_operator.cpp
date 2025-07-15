#include <iostream>
using namespace std;
int main() {
  int mark;
  cout << "Enter The mark : ";
  cin >> mark;
  if (mark >= 80) {
    cout << " A+ ";
  } else if (mark >= 60 && mark < 80){
      cout <<" B+ ";
  }else if (mark >= 35 && mark < 60){
      cout <<" C+ ";
  }else {
      cout << "Fail";
  }
    return 0;
}
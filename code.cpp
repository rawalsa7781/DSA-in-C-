#include<iostream>
using namespace std;

int main() {
  int count = 1;
  int sum = 0;
  int n = 10;

  while (count <=n){
    if (count%2 !=0){
      sum +=1;
    }
  }

cout << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int factorialIterative(int n){
    int fact =1;
    
    for(int i = 1; i<=n; ++i){
        fact*=i;
    }
    return fact;
}

int main(){
    int number;
    cout << "Enter a positive integer :" << " ";
    cin >> number;
    
    if(number<0){
        cout << "Factorial is not defined for negative numbers" << endl;
    }else{
        cout << "The factorial number" << " " << number << " = " <<factorialIterative(number) << endl;
    }
    return 0;
}
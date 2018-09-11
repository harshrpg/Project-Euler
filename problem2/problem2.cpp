// Fibonacci
#include <iostream>
using namespace std;

int main(){
    int num1 = 1;
    int num2 = 2;
    int i = 0;
    int sum = 2;
    int num3 = 0;
    while (num3<4000000){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        if (num3%2==0){
            sum += num3;
        }
    }
    cout << sum;
}
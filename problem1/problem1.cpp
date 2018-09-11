#include <iostream>
using namespace std;

int main(){
    // Find the sum of all the multiples of 3 and 5 below 1000
    int i = 0;
    int sum = 0;
    while(i<1000){
        
        if (i%3==0 || i%5==0) {
            sum += i;
        }
        
        i++;
    }

    cout << "The value is: " << sum;

    return 0;
    
}
// Find GCD of two numbers
#include <iostream>
using namespace std;

int min(int num1, int num2){
    if (num1<num2){
        return num1;
    } else {
        return num2;
    }
}

int main(){
    int number1 = 0, number2 = 0, gcd=1;
    cin >> number1 >> number2;
    int minNumb = min(number1, number2);
    int index = 1;
    for (index; index < minNumb; index++){
        if (minNumb%index == 0){
            gcd = index;
        }
    }
    cout << "GCD is: " << gcd << endl;

    return 0;
}
// Input:
// 8 12
// Output:
// GCD is: 4
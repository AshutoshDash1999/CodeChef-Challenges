// Program to determine whether a given number is a Harshad number
#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cin >>num;
    int sumOfNum = 0;
    while (num!=0){
        int rem = num%10;
        sumOfNum += rem;
        num = num/10;
    }
    if (num%sumOfNum == 0){
        cout << "Its Harshad Number" <<endl;
    } else {
        cout << "Its not Harshad Number" <<endl;
    }
    return 0;
}
// Take input N followed by N more numbers, find sum of those numbers
#include <iostream>
using namespace std;
int main(){
    int noOfInput=0;
    cin >> noOfInput;
    int sum = 0;
    int value =0;
    int index = 0;
    while (index<4){
        cin >> value;
        sum += value;
        index++;
    }
    cout << sum;

    return 0;
}
// Input:
// 4
// 10 20 30 50
// Output:
// 110
// Problem Link: https://www.codechef.com/CCSTART2/problems/VALTRI

#include <iostream>
using namespace std;

int main(){

    int userInput;
    cin >> userInput;

    if (userInput%5 == 0 || userInput%6 == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
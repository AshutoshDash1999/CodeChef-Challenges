// Problem Link: https://www.codechef.com/CCSTART2/problems/ISBOTH

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int userInput;
    cin >> userInput;
    
    if (userInput%5==0 && userInput%11==0){
        cout << "BOTH";
    } else if (userInput%5==0 || userInput%11==0){
        cout << "ONE";
    } else {
        cout << "NONE";
    }
    
    return 0;
}

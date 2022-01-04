// Problem Link: https://www.codechef.com/CCSTART2/problems/RNGEODD

#include <iostream>
using namespace std;

int main(){
    int L, R;
    cin >> L >> R;
    int index = L;
    for (index; index<=R; index++){
        if (index%2 != 0){
            cout << index << ' ';
        }
    }
}
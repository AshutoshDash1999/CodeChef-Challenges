// Problem Link: https://www.codechef.com/CCSTART2/problems/REVMEE

#include <iostream>
using namespace std;

int main(){
    int arrSize;
    cin >> arrSize;
    int arr[arrSize];
    
    for (int index = 0; index<arrSize; index++){
        cin >> arr[index];
    }

    for (int index = arrSize-1; index>=0; index--){
        cout << arr[index] << ' ';
    }

    return 0;
}
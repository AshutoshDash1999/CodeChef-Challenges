// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/ 

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int lengthOfArr = sizeof(arr)/sizeof(arr[0]);
    int s=0, e=lengthOfArr-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s+=1;
        e-=1;
    }

    for (int index=0; index<lengthOfArr; index++){
        cout << arr[index] <<endl;
    }
    return 0;
}
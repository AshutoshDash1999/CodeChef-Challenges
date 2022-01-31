// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/ 

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int lengthOfArr = sizeof(arr)/sizeof(arr[0]);
    int reversedArr[lengthOfArr];
    int index = lengthOfArr-1;
    int jindex = 0;
    for (index; index>=0; index--){
        reversedArr[jindex] = arr[index];
        jindex++;
    }

    jindex = 0;
    for (jindex; jindex<lengthOfArr; jindex++){
        cout << reversedArr[jindex] << " ";
    }

    return 0;
}
// Implement a function to find largest element in an array 
#include <iostream>
using namespace std;

int main(){
    int arr[] = {-3, 4, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    int lN = arr[0];
    for (int index= 0; index<n; index++){
        lN = max(lN, arr[index]);
    }
    cout<<"Largest Number is: " << lN << endl;
    return 0;
}
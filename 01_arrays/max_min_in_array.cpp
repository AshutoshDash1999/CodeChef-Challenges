// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,1,3,5,2,6};
    int min = arr[0], max = arr[0];
    int lengthOfArr = sizeof(arr)/sizeof(arr[0]);
    for (int index=0; index<lengthOfArr; index++){
        if(min > arr[index]){
            min = arr[index];
        }
        if (max < arr[index]){
            max = arr[index];
        }
    }
    cout << "max: " << max << endl;
    cout << "min: " << min << endl;

    return 0;
}
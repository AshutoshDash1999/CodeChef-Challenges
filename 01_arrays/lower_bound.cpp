// Given an arr and val, find lower bound 

#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int val){
    int s = 0, e = n-1;
    if (val<arr[0]){
        return -1;
    } else {
        while(s<e){
            int mid = (s+e)/2;
            if(arr[mid]==val){
                return arr[mid];
            } else if (arr[mid]>=val){
                e = mid;
            } else if (arr[mid]<val){
                s = mid+1;
            }
        }
        return arr[e];
    }
}

int main(){
    int arr[] = { 2, 4, 6, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    int val = 5;
    cout << lowerBound(arr, n, val) <<endl;
    return 0;
}

// Output
// 6 (Because 5 is not present and the higher number greater than 5 present in array is 6)
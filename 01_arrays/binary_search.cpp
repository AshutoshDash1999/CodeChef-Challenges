#include <iostream>
using namespace std;
int main()
{
    int sizeOfArr = 7;
    int arr[7] = {1, 2, 10, 11, 19, 29, 32};
    int findNum = 32;
    int arrlength = sizeof(arr)/sizeof(int);
    int start = 0, end = sizeOfArr-1;
    while(start<=end){
        int mid = (start + end)/2;
        if (arr[mid] == findNum){
            cout << "Index of " << findNum << " is " << mid;
            exit(0);
        } else if (arr[mid] < findNum){
            start = mid+1;
        } else if(arr[mid]>findNum){
            end = mid-1;
        }
    }
    
    return 0;
}
//Output
// Index of 10 is 2
// Linear searching in array or bruteforce method

#include <iostream>
using namespace std;
int main(){
    int nums[8] = {1,2,0,10,11,4,7,3};
    int findNum = 11;
    int lengthOfArr = sizeof(nums)/sizeof(nums[0]);
    for (int index=0; index<lengthOfArr; index++){
        if (nums[index] == findNum){
            cout << "Index of " << findNum <<" is "<< index;
        }
    }
    return 0;
}

//Output
//Index of 11 is 4
// printing pairs 
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr)/sizeof(int);
    int s=0; int e=1;
    for (int index=0; index<n; index++){
        int jindex = 1;
        jindex=index;
        while (jindex<n)
        {
            cout<<arr[index]<<", " << arr[jindex] <<endl;
            jindex++;
        }
        
    }
    return 0;
}

//Output
// 1, 1
// 1, 2
// 1, 3
// 1, 5
// 2, 2
// 2, 3
// 2, 5
// 3, 3
// 3, 5
// 5, 5
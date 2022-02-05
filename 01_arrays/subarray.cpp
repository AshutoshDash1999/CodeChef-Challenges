// Printing sub array and find the largest sum
#include <iostream>
using namespace std;
int main(){
    int fsum = 0;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            int sum = 0;
            for (int k = i; k<=j; k++){
                cout << arr[k] <<",";
                sum += arr[k];
            }
            if (fsum < sum){
                fsum = sum;
            }
            cout << " | Sum is: " << sum << endl;
        }
    }
    cout << "Largest Sum is: " << fsum << endl;
    return 0;
}

// Output 
// 1, | Sum is: 1
// 1,2, | Sum is: 3
// 1,2,3, | Sum is: 6
// 1,2,3,4, | Sum is: 10
// 1,2,3,4,5, | Sum is: 15
// 2, | Sum is: 2
// 2,3, | Sum is: 5
// 2,3,4, | Sum is: 9
// 2,3,4,5, | Sum is: 14
// 3, | Sum is: 3
// 3,4, | Sum is: 7
// 3,4,5, | Sum is: 12
// 4, | Sum is: 4
// 4,5, | Sum is: 9
// 5, | Sum is: 5
// Largest Sum is: 15
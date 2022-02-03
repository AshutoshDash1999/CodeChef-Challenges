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
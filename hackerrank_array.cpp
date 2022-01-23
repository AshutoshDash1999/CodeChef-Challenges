#include <iostream>
using namespace std;
int main(){
    int N = 0;
    cin >> N;
    int arr[N];
    int index = 0;
    for (index; index<N; index++){
        cin >> arr[index];
    }


    index = N-1;
    for (index; index>-1; index--){
        cout << arr[index]<<" ";
    }

    return 0;
}
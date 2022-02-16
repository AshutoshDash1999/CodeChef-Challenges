// K-rotate
// Given a vector and value k, rotate array k times 

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> a{1, 3, 5, 7, 9};
    int k = 2;

    for (int looper = 0; looper<k; looper++){
        int last_ele = a.back(); //store last element of vector
        a.pop_back(); //erase last value of vector
        a.insert(a.begin(), last_ele); // insert element in the start of vector
    }

    for(int index:a){
        cout << index<<" ";
    }
    cout << endl;

    return 0;
}
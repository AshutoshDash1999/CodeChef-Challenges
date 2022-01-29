// by Suraj Sahani 

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    v.push_back(1);
    int fac=2,bar=sqrt(n);
    while(fac<=bar){
        if(n%fac==0)
            v.push_back(fac);
        fac++;
    }
    int s=v.size();
    for(int i=s-1;i>=0;i--){
        int k=n/v[i];
        if(k!=v[i])
            v.push_back(k);
    }
    s=v.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++)
        cout<<v[i]<<' ';
    return 0;
}

// some random comments

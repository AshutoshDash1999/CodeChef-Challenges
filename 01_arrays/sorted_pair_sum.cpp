// Given a sorted array and a number x, find a pair whose sum is closest to x 

#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int anso,anst,diff,tg;
    cin>>tg;
    diff=abs(tg-arr[0]-arr[1]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i]+arr[j];
            temp=abs(tg-temp);
            if(temp<diff){
                diff=temp;
                anso=arr[i];
                anst=arr[j];
            }
        }
    }
    cout<<anso<<' '<<anst<<endl;
    return 0;
}
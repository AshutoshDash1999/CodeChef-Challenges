// by Suraj Sahani 

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag=true;
    int mini=1,maxi;
    for(int i=1;i<=n;i++){
        if(flag){
            maxi=mini+4;
            while(mini<=maxi){
                cout<<mini<<' ';
                mini++;
            }
            flag=false;
            maxi++;
        }
        else{
            maxi+=4;
            mini=maxi;
            while(mini>=maxi-4){
                cout<<mini<<' ';
                mini--;
            }
            flag=true;
            mini=maxi+1;
        }
        cout<<endl;
    }
    return 0;
}
// https://ashutoshdash.netlify.app
// https://leetcode.com/problems/find-the-difference/

#include <iostream>
using namespace std;
int main(){
    string s = "abcd";
    string t = "abcde";
    int sum_s = 0, sum_t = 0;

    for(int index=0; index<s.length(); index++){
        sum_s += int(s[index]);
    }

    for(int index=0; index<t.length(); index++){
        sum_t += int(t[index]);
    }

    int diff = sum_t-sum_s;
    cout <<"Difference in character: "<< char(diff) << endl;

    return 0;
}
//Output
//Difference in character: e
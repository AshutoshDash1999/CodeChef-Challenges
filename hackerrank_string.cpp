// https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    string temp = "";
    temp = b;
    b[0] = a[0];
    a[0] = temp[0];
    cout << a << " " << b << endl;
  
    return 0;
}
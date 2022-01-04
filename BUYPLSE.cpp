// Problem Link: https://www.codechef.com/CCSTART2/problems/BUYPLSE
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int a, b, x, y, totalCost;
    cin >> a >> b >> x >> y;
    
    totalCost = (a*x) + (b*y);
    cout << totalCost;
    

    return 0;
}

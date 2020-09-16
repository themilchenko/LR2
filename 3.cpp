#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int x;
    cout « "Enter the value: ";
    cin » x;
    switch (x % 5) {
        case 0:
            cout « "y(x) = 0";
            break;
        case 1:
            cout « "y(x) = " « 3*x;
            break;
        case 2:
            cout « "y(x) = " « 5*x;
            break;
        case 3:
            cout « "y(x) = " « -x;
            break;
        case 4:
            cout « "y(x) = " « pow(x,3);
            break;
        default:
            cout « "other symbol";
            break;
    }
    return 0;
}

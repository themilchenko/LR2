#include <iostream>
#include <cmath>
using namespace std;
int main () {
    char i;
    cout « "Enter the any symbol: ";
    cin » i;
    if (i >= '0' && i <= '9')
        cout « "it's a numeral";
    else if (i >= 'a' && i <= 'z')
        cout « "it's a spell";
    else if (i >= 'A' && i <= 'Z')
        cout « "it's a spell";
    else cout « "symbol is unknown";
    return 0;
}

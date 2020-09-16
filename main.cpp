#include <iostream>
using namespace std;
int main () {
    int i;
    for (i = 0; i < 256; i++) {
        char n = i;
        cout « i « " " « n « endl;
    }
    return 0;
}

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

#include <iostream>
#include <cmath>
using namespace std;
int main () {
    cout << "enter the x to count arctan x: ";
    double x;
    cin >> x;
    int n=0;
    double g = atan(x);
    double s = 0;
    int i =0;
    double t = pow(-1,n)*(pow(x,2*n+1)/(2*n+1));
    while ((abs(s-t) >= 0.01) && (abs(s-t) <= 0.000001)) {
        s += t;
        n++;
        i++;
    }
    cout << "arctan(x) = " << g << endl;
    cout << "approximate value: " << s << endl;
    cout << "number of iterations: " << i << endl;
    return 0;
}
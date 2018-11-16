#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x_min, f_c, f_d, a = 9.0, b = 14.0, c, d, eps = 0.1, delta = 0.1;
    while (eps < (b - a) / 2){
        c = (a + b) / 2 - delta / 2;
        d = (a + b) / 2 + delta / 2;
        f_c = c*c*exp(sin(c));
        f_d = d*d*exp(sin(d));
        cout << a << " " << b << " " << c << " " << f_c << " " << d << " " << f_d << " " << endl;
        if (f_c <= f_d) b = d;
        if (f_c > f_d) a = c;
    }
    cout<< (a + b) / 2<<endl;
    cout<<"x(m)["<<c<<";"<<d<<"]"<<endl;
    cout<<f_c<<";"<<f_d<<endl;
    return 0;
}


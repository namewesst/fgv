> яна:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int j = 1, k = 0;
    //задание 1
    k = 3;
    int a;
    a = j + k;
    int b;
    b = k - j;
    int c;
    c = j * k;
    int d;
    d = k / j;
    int f;
    f = k % j;
    cout << " j + k = " << a << endl;
    cout << " k - j = " << b << endl;
    cout << " j * k = " << c << endl;
    cout << " k / j = " << d << endl;
    cout << " k % j = " << f << endl;

    //задание 2
    cout << boolalpha;

    int i = 1, j1 = 0, k1 = 1, l = 0;

    cout << "true = " << (i == k1) << endl;
    cout << "false = " << (i == j1) << endl;

    cout << "true = " << (i != l) << endl;
    cout << "false = " << (i != k) << endl;

    cout << "true = " << (k1 > l) << endl;
    cout << "false = " << (j1 > i) << endl;

    cout << "true = " << (j1 < k1) << endl;
    cout << "false = " << (i < l) << endl;

    cout << "true = " << (i >= k1) << endl;
    cout << "false = " << (j1 >= k1) << endl;

    cout << "true = " << (l <= j1) << endl;
    cout << "false = " << (i <= l) << endl;

    //задание 3
    int a1 = 3, b1 = 6, c1 = 3, d1 = 6;

    cout << "true = " << (a1 == c1 && b1 == d1) << endl;
    cout << "true = " << (a1 == d1 || d1 == b1) << endl;

    cout << "true = " << (a1 != b1 && b1 == d1) << endl;
    cout << "true = " << (a1 == b1 || b1 == d1) << endl;

    cout << "true = " << (b1 != a1 && c1 != d1) << endl;
    cout << "true = " << (a1 != c1 || b1 == d1) << endl;

}

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int res1 = a * 60 + b;
    int res2 = c * 60 + d;

    int res = res2 - res1;

    cout << res;

    return 0;
}
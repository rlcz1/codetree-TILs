#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int t = 11 * 60 * 24;  // day
    t += 11 * 60;  // hour
    t += 11;  // min

    int res = a * 60 * 24;  // day
    res += b * 60;  // hour
    res += c;  // min

    if (res < t) {
        cout << -1 << endl;
        return 0;
    }

    res -= t;

    cout << res << endl;

    return 0;
}
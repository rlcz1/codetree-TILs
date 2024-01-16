#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cnt = 0, t = 0;
    cin >> n;

    vector<int> v(200);

    for (int i = 0; i < n; i++) {
        int a;
        char b;
        cin >> a >> b;

        int prev = t;

        (b == 'R') ? (t += a) : (t -= a);

        prev += 100;
        t += 100;

        int s, e;
        if (prev < t) {
            s = prev;
            e = t;
        } else {
            s = t;
            e = prev;
        }

        for (int i = s; i < e; i++) v.at(i)++;

        t -= 100;
        prev -= 100;
    }

    for (int i = 0; i < v.size(); i++) {
        if (2 <= v.at(i)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
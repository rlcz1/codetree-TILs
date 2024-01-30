#include <iostream>
#include <vector>
#define MAX 100000

using namespace std;

int main() {
    int n, ptr = MAX;
    cin >> n;
    vector<int> v(MAX * 2 + 1);

    while (n > 0) {
        int a;
        char b;
        cin >> a >> b;
        if (b == 'R') {
            while(a--) {
                v.at(ptr) = 1;
                if (a) ptr++;
            }
        } else if (b == 'L') {
            while(a--) {
                v.at(ptr) = 2;
                if (a) ptr--;
            }
        }
        n--;
    }

    int r_cnt = 0, l_cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == 1) r_cnt++;
        else if (v.at(i) == 2) l_cnt++;
    }

    cout << l_cnt << ' ' << r_cnt;

    return 0;
}
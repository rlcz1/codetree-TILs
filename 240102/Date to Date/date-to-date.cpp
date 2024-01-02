#include <iostream>
#include <array>

using namespace std;

int main() {
    int m1, d1, m2, d2;

    array<int, 13> day =  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cin >> m1 >> d1 >> m2 >> d2;

    int res = 0;
    for (int i = m1; i <= m2; i++) {
        res += day[i];
    }

    res += -(d1-1) - (day[m2] - d2); 

    // 30(m1) + 31(m2) - 5(d1)+1 - 10(31(m2) - (21)d2);

    cout << res;


    return 0;
}
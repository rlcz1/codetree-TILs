#include <iostream>
#include <array>

using namespace std;

int main() {
    array<string, 7> str =  {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    array<int, 13> day =  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int res1 = d1, res2 = d2;
    for (int i = 0; i < m1; i++) res1 += day[i];
    for (int i = 0; i < m2; i++) res2 += day[i];

    int idx = ((res2 - res1) % 7);
    if (idx < 0) idx += 7;

    cout << str[idx];

    return 0;
}
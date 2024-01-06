#include <iostream>
#include <array>

using namespace std;

int main() {

    array<string, 7> str =  {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    array<int, 13> day =  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;
    string A;

    cin >> m1 >> d1 >> m2 >> d2 >> A;

    int intA;
    for (int i = 0; i < str.size(); i++) {
        if (A.compare(str[i]) == 0) intA = i;
    }

    int res1 = d1;
    for (int i = 0; i < m1; i++) res1 += day[i];
    int res2 = d2;
    for (int i = 0; i < m2; i++) res2 += day[i];

    int total_days = res2 - res1;
    int res = total_days / 7;
    if (total_days % 7 >= intA) res += 1;

    cout << res;

    return 0;
}
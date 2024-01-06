#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int num = 0, cnt = 0;

    cin >> num;

    string str = to_string(num);

    int res = 0;

    for (int i = 0; i < str.length(); i++) {
        int a = str.at(str.length() - i - 1) - '0';
        res +=  a * pow(2, i);
    }

    cout << res;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    int res = 0, cnt = 0;

    int bin[20] = {0};

    cin >> N;

    // Decimal
    while(true) {
        if (N <= 0) break;
        int first = N % 10;
        res += first * pow(2, cnt++);

        N /= 10;
    }

    res *= 17;

    // Binary
    cnt = 0;
    while(true) {
        if (res <= 0) {
            bin[cnt] = res / 2;
            break;
        }
        bin[cnt++] = res % 2;
        res /= 2;
    }

    // print
    for (int i = cnt-1; i >= 0; i--) {
        cout << bin[i];
    }

    return 0;
}
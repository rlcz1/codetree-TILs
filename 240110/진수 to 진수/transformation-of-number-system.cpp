#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, n, cnt = 0, dec = 0;
    int bin[20] = {0};

    cin >> a >> b >> n;

    // Decimal
    while(true) {
        if (n < a) {
            dec += n * pow(a, cnt);
            break;
        }
        int first = n % 10;
        dec += first * pow(a, cnt++);

        n /= 10;
    }

    // transformation
    cnt = 0;
    while(true) {
        if (dec < b) {
            bin[cnt] = dec;
            break;
        }
        bin[cnt++] = dec % b;

        dec /= b;
    }

    // print
    for (int i = cnt; i >= 0; i--) {
        cout << bin[i];
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int n = 0, cnt = 0;
    int digits[20] = {};

    cin >> n;

    while (true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 2;
        n /= 2;
    }
    
    for(int i = cnt - 1; i >= 0; i--) cout << digits[i];
}
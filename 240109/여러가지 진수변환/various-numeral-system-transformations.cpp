#include <iostream>
using namespace std;

int main() {
    int N, B, cnt = 0;
    int bin[20] = {0};

    cin >> N >> B;

    while(true) {
        if (N < B) {
            bin[cnt++] = N;
            break;
        }
        bin[cnt++] = N % B;
        N = N / B;
    }

    for (int i = cnt-1; i >= 0; i--) {
        cout << bin[i];
    }
 
    return 0;
}
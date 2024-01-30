#include <iostream>
#define MAX 1001

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[MAX] = {0,};

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i-2] + dp[i-1]) % 10007;
    }

    cout << dp[n];


    return 0;
}
#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n][n] = {};
    int dp[n][n] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            arr[i][j] = a;
        }
    }

    dp[0][0] = arr[0][0];

    for (int i = 1; i < n; i++) dp[i][0] = dp[i-1][0] + arr[i][0];
    for (int i = 1; i < n; i++) dp[0][i] = dp[0][i-1] + arr[0][i];

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + arr[i][j];
        }
    }

    cout << dp[n-1][n-1];

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

#define MAX 100000

int main() {
    int t = MAX;
    int n, b = 0, w = 0, g = 0;
    cin >> n;

    vector<int> V(MAX*2+1);
    vector<int> W(MAX*2+1);
    vector<int> B(MAX*2+1);

    for (int i = 0; i < n; i++) {
        int a;
        char b;

        cin >> a >> b;

        if (b == 'L') {
            while(a--) {
                V[t] = 1;
                W[t]++;
                if (a) t--;
            }
        } else {
            while(a--) {
                V[t] = 2;
                B[t]++;
                if (a) t++;
            }
        }
    }

    for (int i = 0; i <= MAX * 2; i++) {
        if (B[i] >= 2 && W[i] >= 2) g++;
        else if(V[i] == 1) w++;
        else if(V[i] == 2) b++;
    }
    cout << w << ' ' << b << ' ' << g << endl;

    return 0;
}
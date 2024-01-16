#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;

    vector<int> v(101);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        for (int j = a; j <= b; j++) v.at(j)++;
    }

    for (int i = 0; i < v.size(); i++) {
        if (max < v.at(i)) max = v.at(i);
    }

    cout << max << endl;

    return 0;
}
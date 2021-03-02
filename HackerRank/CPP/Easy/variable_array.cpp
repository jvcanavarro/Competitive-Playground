#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> ks(n);


    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        ks[i] = vector<int> (size);
        for (int j = 0; j < size; j++) {
            cin >> ks[i][j];
        }
        
    }

    while (q-- > 0) {
        int x, y;
        cin >> x >> y;
        cout << ks[x][y] <<endl;
    }

    return 0;
}

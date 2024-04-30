#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int countingSubgrids(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<int> row(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            row[i] |= grid[i][j] << (m - j);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int bits = __builtin_popcount(row[i] & row[j]);
            int cnt = bits * (bits - 1) / 2;
            ans += cnt;
        }
    }

    return ans;
}

int main() {
    freopen("Counting_Subgrids_input2.txt", "r", stdin);
    freopen("Counting_Subgrids_output2.txt", "w", stdout);

    int n;
    cin >> n;
    vector<vector<int>>grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
        
    }

    int res = countingSubgrids(grid);
    cout << res << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int maximumIceBars(vector<int> &costs, int coins) {
    sort(costs.begin(), costs.end());
    int ans = 0;
    for (auto it : costs) {
        if (coins >= it) {
            coins -= it;
            ans++;
            continue;
        } 
        break;
    }
    return ans;
}

int main() {
    fastio;
    freopen("Maximum_Ice_Bars_input3.txt", "r", stdin);
    freopen("Maximum_Ice_Bars_output3.txt", "w", stdout);

    int n;
    cin >> n;
    
    vector<int> costs(n);
    for (int i = 0; i < n; i++) {
        cin>>costs[i];
    }
    
    int coins;
    cin >> coins;

    int res = maximumIceBars(costs, coins);
    cout << res << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
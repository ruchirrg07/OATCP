#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int patchingArray (vector<int>& nums, int n) {
    int sz = nums.size();
    ll mx = 0, ans = 0;
    for (int i = 0; i < sz; i++) {
        while (nums[i] > (mx + 1)) {
            mx = 2 * mx + 1;
            ans++;
            if (mx >= n) {
                return ans;
            }
        }
        mx += nums[i];
        if (mx >= n) {
            return ans;
        }
    }
    while (mx < n) {
        mx = 2 * mx + 1;
        ans++;
    }
    return ans;
}
    
int main() {
    // fastio;
    freopen("Patching_Array_input2.txt", "r", stdin);
    freopen("Patching_Array_output2.txt", "w", stdout);
    
    vector<int> v;
    int x;
    while(cin >> x) {
        v.push_back(x);
        if (cin.peek() == '\n') {
            break;
        }
    }
 
    int n;
    cin >> n;

    int res = patchingArray(v, n);
    cout << res;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
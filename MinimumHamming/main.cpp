#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int minimumHamming(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    for (int i = 0; i < 32; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            cnt += (nums[j] >> i) & 1;
        }
        ans += (cnt) * (n - cnt);
    }
    return ans;
}

int main() {
    freopen("Minimum_Hamming_input2.txt", "r", stdin);
    freopen("Minimum_Hamming_output2.txt", "w", stdout);
    
    vector<int> v;
    int x;
    while (cin >> x) {
        v.push_back(x);
        if (cin.peek() == '\n') {
            break;
        }
    }

    int res = minimumHamming(v);
    cout << res << endl;

    fclose(stdin);
    fclose(stdout);
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

string minimumInteger(string s, int k) {
    int n = s.size();
    stack<char> st;
    for (auto it : s) {
        while (!st.empty() && k > 0 && st.top() > it) {
            st.pop();
            k -= 1;
        }
        if (!st.empty() || it != '0')
            st.push(it);
    }
    while (!st.empty() && k--) {
        st.pop();
    }
    if (st.empty()) {
        return "0";
    }
    while (!st.empty()) {
        s[n - 1] = st.top();
        st.pop();
        n -= 1;
    }
    return s.substr(n);
}
 
int main() {
    fastio;
    freopen("Minimum_Integer_input2.txt", "r", stdin);
    freopen("Minimum_Integer_output2.txt", "w", stdout);

    string s;
    cin >> s;
    int k;
    cin >> k;

    string ans = minimumInteger(s, k);
    cout << ans << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
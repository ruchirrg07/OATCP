#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

bool static compare(int a, int b) {
    string str1 = to_string(a), str2 = to_string(b);
    return str1 + str2 > str2 + str1;
}

string largestNumber(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end(), compare);
    string ans = "";
    for(int i = 0; i < n; i++)
        ans += to_string(nums[i]);
    if(ans[0] == '0')
        return "0";
    return ans;
}

int main() {
    fastio;
    freopen("Largest_Number_input2.txt", "r", stdin);
    freopen("Largest_Number_output2.txt", "w", stdout);

    int n;
    
    vector<int> v;
    while(cin>>n) {
        v.push_back(n);
    }

    string res = largestNumber(v);
    cout << res << endl;

    fclose(stdin);
    fclose(stdout);

    return 0;
}
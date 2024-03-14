#include <bits/stdc++.h>
using namespace std;
 
int countPaths(int n, vector<vector<char>>&grid) {
    vector<vector<int>>dp(n, vector<int>(n, 0));
    dp[0][0] = (grid[0][0] == '.') ? 1 : 0;
    for (int i = 1; i < n; ++i) {
        if (grid[i][0] == '.') {
            dp[i][0] = dp[i-1][0];
        }
    }
    for (int j = 1; j < n; ++j) {
        if (grid[0][j] == '.') {
            dp[0][j] = dp[0][j-1];
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == '.') {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    return dp[n-1][n-1];
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    int n;
    inputFile >> n;
    vector<vector<char>>grid(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inputFile >> grid[i][j];
        }
    }
    int numPaths = countPaths(n, grid);

    outputFile << "Number of paths: " << numPaths << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

// ASSUMES length a > b
int main(){
    string a;
    string b;

    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    //int dp[n+1][m+1] = {0};
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    // dp[i][j] is the LCS of first i characters in A and first J characters in B
    dp[0][0] = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                dp[i+1][j+1] = dp[i][j] + 1;
            }
            else{
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}

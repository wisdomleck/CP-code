#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

#define MDLO (long long)(1e9+7)

int main(){
    long long dp[101][2] = {0};
    // let index be the sum, each cell containing number of ways
    // to get to that sum, and second dim being if used atleast d

    int n, k, d;
    cin >> n >> k >> d;

    // iterate through each possible sum, adding previous sums.
    dp[0][0] = 1;
    for(int sum = 1; sum <= n; sum++){
        // for each sum, can be reached by 1...k ways
        for(int i = 1; i <= k; i++){
            // if i >= d, then the pattern has completed the requirement
            if(sum - i >= 0 && i >= d){
                dp[sum][1] += dp[sum-i][0] + dp[sum-i][1];
                // Might be too large even for long long so take modulo
                dp[sum][1] %= MDLO;
            }
            else if(sum - i >= 0 && i < d){
                dp[sum][1] += dp[sum - i][1];
                dp[sum][0] += dp[sum - i][0];

                // Might be too large for long long
                dp[sum][0] %= MDLO;
            }
        }
    }

    cout << dp[n][1] % MDLO << endl;

    return 0;
}

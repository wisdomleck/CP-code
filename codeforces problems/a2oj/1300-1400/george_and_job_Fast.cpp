#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

long long dp[5001][5001] = {0};

int main(){
    int n , m , k;
	cin>>n>>m>>k;

	long long a[5005];
	long long sum[5005];
	for ( int i=1 ; i<=n ; i++ ) cin>>a[i] , sum[i] = sum[i-1] + a[i];

	for ( int i=1 ; i<=k ; i++ )
	{
		for ( int j=(i*m) ; j<=n ; j++ )
		{
            /*
                start j = i*m because given x subsets used, we can only
                start at atleast i*m indexes down without overlap
                i refers to how many subsets we use j is the index of the
                numbers array. every index in the original array will have
                its max sum, and the number of sets used. if we want to
                consider a max sum using the current number, we must
                consider the max sum m spaces away so we make sure the ranges
                don't overlap. hopefully, for every number of subsets
                available, we iterate down the list each time updating each
                possible addition to each existing subset sum. at the
                end we should get the max.
            */
			dp[i][j] = max(dp[i][j-1] , dp[i-1][j-m] + (sum[j]-sum[j-m]) );
		}
	}

	cout<<dp[k][n]<<"\n";




    return 0;
}

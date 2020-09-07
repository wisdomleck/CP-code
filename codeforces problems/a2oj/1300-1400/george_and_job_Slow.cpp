#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

long long dp[5001][5001] = {0};

int main(){
    // in pi to pn, need l intervals of m numbers-width
    int n, m, l;
    cin >> n >> m >> l;

    vector<long long> s;

    for(int i = 0; i < n; i++){
        long long num;
        cin >> num;
        s.push_back(num);
    }

    // make prefix sum using m width intervals
    vector<long long> p;

    for(int i = m-1; i < s.size(); i++){
        long long sum = 0;
        for(int j = i-(m-1); j <= i; j++){
            sum += s[j];
        }
        p.push_back(sum);
    }

    /*for(auto elem : p){
        cout << elem << " ";
    }*/

    // Problem now is a maximum sum of numbers such that if number i
    // is included, can only use i+m next
    // if element i is to be considered, can only add to elements i-m
    // find max sum
    // Whats important?
    // last number used (index)
    // number of numbers used, (<2)
    // index[i][k], need sum??
    // transition???
    //long long maxsum = 0;

    for(int i = 0; i < p.size(); i++){
        // initialise by saying can add the first m elements
        if(i < m){
            dp[i][1] = p[i];
        }
        // see if you can add the element to anything before i-m
        else{
            // consider the slots you can add it to
            for(int j = 0; j <= i-m; j++){
                for(int k = 0; k < l; k++){
                    dp[i][k+1] = max(dp[j][k] + p[i], dp[i][k+1]);
                }
            }
        }
    }

     // cycle through, find max
    long long maxsum = 0;
    for(int i = 0; i < p.size(); i++){
        for(int k = 0; k <= l; k++){
            if(dp[i][k] > maxsum){
                maxsum = dp[i][k];
            }
        }
    }

    cout << maxsum << endl;
    //cout << p.size() << " " << s.size() << endl;





    return 0;
}

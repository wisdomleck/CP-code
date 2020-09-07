#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int tests;
    cin >> tests;
    vector<int> ans;

    for(int i = 0; i < tests; i++){
        int n;
        cin >> n;
        vector<int> s;
        for(int i = 0; i < n; i++){
            int gran;
            cin >> gran;
            s.push_back(gran);
        }

        sort(s.begin(), s.end());

        int allowed = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] < i + 2){
                allowed = i + 2;
            }
        } // 1 1 4 5 5 9

        ans.push_back(allowed);
    }

    for(auto elem : ans){
        cout << elem << endl;
    }
    return 0;
}

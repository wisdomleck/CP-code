#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int s;
    cin >> s;
    vector<int> ans;
    for(int i = 0; i < s; i++){
        int a, b;
        cin >> a >> b;
        ans.push_back((a * b + 1)/ 2);
    }
    for(auto elem : ans){
        cout << elem << endl;
    }

    return 0;
}

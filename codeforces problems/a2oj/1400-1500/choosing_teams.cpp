#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> s;

    for(int i = 0; i < n; i++){
        int n;
        cin >> n;
        s.push_back(n);
    }

    sort(s.begin(), s.end());
    int counter = 0;

    for(auto elem : s){
        if(elem + k <= 5){
            counter ++;
        }
    }

    cout << counter/3 << endl;

    return 0;
}

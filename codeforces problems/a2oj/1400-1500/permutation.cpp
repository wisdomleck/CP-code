#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> s;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }

    int incorrect = 0;
    for(int i = 1; i <= n; i++){
        if(s.count(i) != 1){
            incorrect ++;
        }
    }

    cout << incorrect << endl;

    return 0;
}

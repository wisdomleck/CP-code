#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s;
    for(int i = 0; i < n; i ++){
        int a;
        cin >> a;
        s.push_back(a);
    }

    // trivial case
    if(s.size() <= 2){
        cout << "no" << endl;
        return 0;
    }

    int i = 0;
    for(int j = 0; j + 1 < s.size(); j++){
        for(int i = 0; i + 1 < s.size(); i++){
            int x1 = min(s[i], s[i+1]);
            int x2 = max(s[i], s[i+1]);
            int x3 = min(s[j], s[j+1]);
            int x4 = max(s[j], s[j+1]);

            if(x1 < x3 && x3 < x2 && x2 < x4){
                cout << "yes" << endl;
                return 0;
            }
            else if(x3 < x1 && x1 < x4 && x4 < x2){
                cout << "yes" << endl;
                return 0;
            }\
        }
    }


    cout << "no" << endl;


    return 0;
}

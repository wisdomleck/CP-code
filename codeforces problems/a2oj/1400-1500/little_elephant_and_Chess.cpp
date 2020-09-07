#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    vector<string> s;

    for(int i = 0; i < 8; i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }

    for(auto elem : s){
        for(int i = 0; i < 7; i++){
            if(elem[i] == elem[i+1]){
                cout <<"NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;



    return 0;
}

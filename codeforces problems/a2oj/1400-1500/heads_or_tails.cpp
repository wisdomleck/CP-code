#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    //x - vas tosses
    //y - pet tosses
    //a - vasya points atleast
    //b - pet points atleast
    //vas always wins
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int,int>> s;

    for(int i = a; i <= x; i++){
        for(int j = b; j <= y; j++){
            if(i > j){
                s.push_back({i,j});
            }
        }
    }
    cout << s.size() << endl;
    for(auto elem : s){
        cout << elem.first << " " << elem.second << endl;
    }



    return 0;
}

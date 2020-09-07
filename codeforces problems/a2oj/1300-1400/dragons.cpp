#include <bits/stdc++.h>

using namespace std;

int main(){
    int strength, dragons;
    cin >> strength >> dragons;

    vector<pair<int,int>> fights;

    for(int i = 0; i < dragons; i++){
        pair<int,int> fight;
        cin >> fight.first >> fight.second;
        fights.push_back(fight);
    }

    sort(fights.begin(), fights.end());

    for(auto fight : fights){
        if(strength > fight.first){
            strength += fight.second;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


    return 0;
}

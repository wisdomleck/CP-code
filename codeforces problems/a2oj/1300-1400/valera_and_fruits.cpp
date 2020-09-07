#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n, v;
    cin >> n >> v;

    vector<pair<int,int>> s;

    for(int i = 0; i < n; i++){
        pair<int,int> a;
        cin >> a.first >> a.second;
        s.push_back(a);
    }

    sort(s.begin(), s.end());

    int total = 0;
    int daytotal = 0;

    int day = s[0].first;
    int i = 0;
    // Consider each tree
    while(i < n){
        // If there is a tree and we have harvesting space
        if((day == s[i].first || day == s[i].first + 1) && daytotal < v){
            int harvested = min(v-daytotal, s[i].second);
            s[i].second -= harvested;
            daytotal += harvested;
            //cout << "day: " << day << "harvested: " << harvested << "daytotal: " << daytotal << endl;
            // if tree has no more harvest, move onto next
            if(s[i].second <= 0){
                i++;
            }
        }
        // if harvest max, sleep
        if(daytotal == v){
            day++;
            total += daytotal;
            daytotal = 0;
        }

        // if no possible tree to harvest on this day, increment tree (for tree day < day)
        if(day > s[i].first + 1){
            i++;
        }
        // if no possible tree because day is behind, increment day
        if(day < s[i].first){
            day++;
            total += daytotal;
            daytotal = 0;
        }

        if(i >= n){
            total += daytotal;
        }

        //cout << day << " " << i << endl;

    }

    cout << total << endl;


    return 0;
}

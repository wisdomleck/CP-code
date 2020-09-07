#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;

    //multimap<int,int> s;
    int s[1000];
    int s2[1000];
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        //s.insert({a,b});
        s[i] = a;
        s2[i] = b;
    }

    int counter = 0;
    // O(n^2)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i] == s2[j] && i != j){
                counter++;
                break;
            }
        }
    }
    /* Close but fails for a few corner cases.
    set<int> seen;
    for(auto it = s.begin(); it != s.end(); it++){
        if(s.find(it->second) != it){
            if(s.find(it->second) != s.end() && !seen.count(it->second)){
                auto result = s.equal_range(it->second);
                int count = distance(result.first, result.second);
                counter += count;
                // we've seen this bottle now
                seen.insert(it->second);
            }
        }
    }*/

    cout << n - counter << endl;



    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int numstones;
    cin >> numstones;

    vector<int> s;
    vector<int> sorted;
    for(int i = 0; i < numstones; i++){
        int stone;
        cin >> stone;
        s.push_back(stone);
        sorted.push_back(stone);
    }

    sort(sorted.begin(), sorted.end());

    // Generate an array for sums for both arrays
    vector<long long int> prefixs(s.size() + 1);
    vector<long long int> prefixsorted(s.size() + 1);

    prefixs[0] = 0;
    prefixsorted[0] = 0;
    for(int i = 0; i < s.size(); i++){
        prefixs[i+1] = prefixs[i] + s[i];
        prefixsorted[i+1] = prefixsorted[i] + sorted[i];
    }

    int questions;
    cin >> questions;

    for(int i = 0; i < questions; i++){
        int type, l, r;
        cin >> type >> l >> r;

        if(type == 1){
            long long int sum = prefixs[r] - prefixs[l-1];
            cout << sum << endl;
        }
        else if(type == 2){
            long long int sum = prefixsorted[r] - prefixsorted[l-1];
            cout << sum << endl;
        }
    }

    return 0;
}

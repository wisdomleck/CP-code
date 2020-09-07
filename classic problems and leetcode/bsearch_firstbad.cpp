#include <bits/stdc++.h>;

using namespace std;

#define INF 1e9 + 5;

int main(){
    vector<int> s = {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1}; // cout index 5
    int lo = 0;
    int hi = s.size()-1;
    int mid;
    int mintrue = INF;

    while(lo <= hi){
        mid = (lo+hi)/2;
        // go right
        if(s[mid] == 0){
            lo = mid+1;
        }
        // go left
        else if(s[mid] == 1){
            if(mid < mintrue){
                mintrue = mid;
            }
            hi = mid - 1;
        }
    }
    cout << mintrue << endl;

    return 0;
}

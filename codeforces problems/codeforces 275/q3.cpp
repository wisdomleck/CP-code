#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2 && y1 == y2){
            cout << 1 << endl;
        }
        else{
            cout << (long long)abs(x1-x2) * (long long)abs(y1-y2) + (long long)1 << endl;
        }
    }


    return 0;
}

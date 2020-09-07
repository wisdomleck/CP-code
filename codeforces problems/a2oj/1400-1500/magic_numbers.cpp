#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n > 0){
        int remainder3 = n % 1000;
        int remainder2 = n % 100;
        int remainder1 = n % 10;

        if(remainder3 == 144){
            n /= 1000;
            continue;
        }
        else if(remainder2 == 14){
            n /= 100;
            continue;
        }
        else if(remainder1 == 1){
            n /= 10;
            continue;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;


    return 0;
}

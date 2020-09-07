#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m;
    cin >> n >> m;
    long long int prev = 1;
    long long int time = 0;
    for(int i = 0; i < m; i++){
        long long int ai;
        cin >> ai;

        if(ai < prev){
            time += n - abs(ai - prev);
        }
        else{
            time += (ai - prev);
        }

        prev = ai;
    }

    cout << time << endl;

    return 0;
}

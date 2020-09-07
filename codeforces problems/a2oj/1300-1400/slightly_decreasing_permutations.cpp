#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    while(k > 0){
        cout << n << " ";
        n --;
        k--;
    }
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }



    return 0;
}

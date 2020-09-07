#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;
    int n;

    for(int i = 0; i < inputs; i++){
        if(n == 0){
            cout << 0 << endl;
            continue;
        }
        cin >> n;
        cout << (int)(n-1)/2 << endl;
    }

    return 0;
}

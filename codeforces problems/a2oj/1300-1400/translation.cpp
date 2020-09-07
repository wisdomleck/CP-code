#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    string::iterator tptr = t.end();
    tptr--;
    for(char c : s){
        if(c != *tptr){
            cout << "NO" << endl;
            return 0;
        }
        else{
            tptr--;
        }
    }

    cout << "YES" << endl;


    return 0;
}

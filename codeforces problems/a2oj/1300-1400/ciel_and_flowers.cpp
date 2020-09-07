#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int r, b, g;
    cin >> r >> b >> g;

    int most = 0;

    for(int i = 0; i <= 2; i++){
        int mixed = min({i, r, b, g});
        int redb = r - i;
        int blueb = b - i;
        int greenb = g - i;
        //cout << redb << blueb << greenb << mixed << endl;
        if((redb/3) + (blueb/3) + (greenb/3) + mixed > most){
            most = (redb/3) + (blueb/3) + (greenb/3) + mixed;
        }
    }

    cout << most << endl;



    return 0;
}

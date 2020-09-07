#include <bits/stdc++.h>

using namespace std;

int main(){
    int power;
    cin >> power;

    map<int,int> mymap = {
                    {1,8},
                    {2,4},
                    {3,2},
                    {0,6},
    };
    if(power == 0){
        cout << 1 << endl;
        return 0;
    }

    int remainder = power % 4;
    cout << mymap[remainder] << endl;


    return 0;
}

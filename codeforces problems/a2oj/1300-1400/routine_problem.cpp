#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int lowestfactor(int a, int b){
    for(int i = 2; i <= min(a,b); i++){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int lcm(int a, int b){
    int multiple = max(a,b);
    while(multiple % a != 0 || multiple % b != 0){
        multiple += max(a,b);
    }
    return multiple;
}

int main(){
    //1:1 3:2

    //2:2 3:2

    //4:3 2:2

    //8:6 6:6

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int denom = lcm(b,d);

    a *= denom/b;
    c *= denom/d;

    int fractiontop = min(a,c);
    int fractionbot = max(a,c);

    fractiontop = fractionbot - fractiontop;

    while(lowestfactor(fractiontop, fractionbot) != 1){
        int factor = lowestfactor(fractiontop, fractionbot);
        fractiontop /= factor;
        fractionbot /= factor;
    }

    if(fractiontop == 0){
        cout << "0/1" << endl;
    }
    else{
        cout << fractiontop << "/" << fractionbot << endl;
    }



    return 0;
}

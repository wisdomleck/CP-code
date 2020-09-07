#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int millis = k*l;
    int limeslices = c*d;

    int drinks = min(min(millis/nl, limeslices), p/np);
    cout << drinks/n << endl;

    return 0;
}

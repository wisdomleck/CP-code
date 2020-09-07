#include <bits/stdc++.h>

typedef long long ll;
//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

string recipe;
int nbread, nsausage, ncheese;
int pbread, psausage, pcheese;
long long rubles;
map<char, int> m;

long long minmoneyreq(int b, int s, int c, int pb, int ps, int pc, long long h);

int main(){
    cin >> recipe;
    cin >> nbread >> nsausage >> ncheese;
    cin >> pbread >> psausage >> pcheese >> rubles;
    for(char elem : recipe){
        if(m.find(elem) == m.end()){
            m.insert({elem, 0});
        }
        m[elem] += 1;
    }


    // let f(x) be a function that takes in the number of hamburgers
    // and returns number of money for that many hamburgers
    // need so that rubles > f(x), for greatest x
    long long lo = 0;
    long long hi = 1e13;
    long long mid;
    long long greatestx = 0;

    while(lo <= hi){
        mid = (lo+hi)/2;
        // go right
        if(rubles >= minmoneyreq(m['B'],m['S'], m['C'] ,pbread,psausage,pcheese,mid)){
            if(mid > greatestx){
                greatestx = mid;
            }
            lo = mid+1;
        }
        // go left
        else if(rubles < minmoneyreq(m['B'],m['S'], m['C'] ,pbread,psausage,pcheese,mid)){
            hi = mid-1;
        }
    }


    cout << greatestx << endl;


    return 0;
}

long long minmoneyreq(int b, int s, int c, int pb, int ps, int pc, long long h){
    long long x = max(0LL, b*h - nbread);
    long long y = max(0LL, s*h - nsausage);
    long long z = max(0LL, c*h - ncheese);
    return x*pb + y*ps + z*pc;
}

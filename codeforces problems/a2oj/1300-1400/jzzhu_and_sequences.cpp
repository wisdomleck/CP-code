#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    long long MDLO = 1000000007;
    long long f1, f2, n;
    cin >> f1 >> f2 >> n;
    long long temp3;
    // Annoying pattern that reoccurs every 6 times
    n = n%6;

    if(n == 0){
        temp3 = f1-f2;
    }
    else if(n == 1){
        temp3 = f1;
    }
    else if(n == 2){
        temp3 = f2;
    }
    else if(n == 3){
        temp3 = f2-f1;
    }
    else if(n == 4){
        temp3 = -f1;
    }
    else if(n == 5){
        temp3 = -f2;
    }

    if(temp3 >= 0LL){
        cout << temp3 % MDLO << endl;
    }
    else{
        temp3 == -1000000007?temp3=0:temp3=(MDLO + (temp3 % MDLO));
        cout << temp3 << endl;
    }

    return 0;
}

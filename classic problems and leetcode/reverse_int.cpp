#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int reverse(int x) {
    long long output = 0;
    bool isnegative = (x < 0);
    x = abs(x);
    while(x > 0){
        output *= 10;
        int digit = x % 10;
        output += digit;
        x /= 10;
    }
    if(output > INT_MAX){
        return 0;
    }
    if(isnegative){
        output *= -1;
        return output;
    }
    return output;
}

int main(){
    cout << reverse(112345);


    return 0;
}

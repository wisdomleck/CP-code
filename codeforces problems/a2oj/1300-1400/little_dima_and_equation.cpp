#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;


long long pow2(int base, int power){
    long long prod = 1;
    for(int i = 0; i < power; i++){
        prod = prod * base;
    }
    return prod;
}

int digitsum(int num){
    int sum = 0;
    while(num > 0){
        int remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    return sum;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<long long> s;
    vector<long long> ans;

    for(int i = 0; i < 9*10; i++){
        long long value = b * pow2(i, a) + c;
        s.push_back(value);
    }

    for(int i = 1; i < s.size(); i++){
        if(i == digitsum(s[i]) && s[i] < 1e9){
            ans.push_back(s[i]);
        }
    }

    cout << ans.size() << endl;
    for(auto elem : ans){
        cout << elem << " ";

    }


    return 0;
}

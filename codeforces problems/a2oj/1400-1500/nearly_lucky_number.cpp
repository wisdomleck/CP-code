#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;


int num47s(long long num){
    int counter = 0;
    int remainder;
    while(num > 0){
        remainder = num % 10;
        if(remainder == 4 || remainder == 7){
            counter ++;
        }
        num /= 10;
    }

    return counter;
}

int main(){
    long long num;
    cin >> num;

    if(num47s(num) == 7 || num47s(num) == 4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}

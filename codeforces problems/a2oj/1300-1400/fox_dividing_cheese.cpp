#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

void getpowers(int & num, int* powercounts){
    while(!(num % 5) || !(num % 3) || !(num % 2)){
        if(num % 5 == 0){
            powercounts[5] += 1;
            num /= 5;
        }
        else if(num % 3 == 0){
            powercounts[3] += 1;
            num /= 3;
        }
        else if(num % 2 == 0){
            powercounts[2] += 1;
            num /= 2;
        }
    }
    return;
}

int main(){
    int a, b;
    cin >> a >> b;

    int powercounts1[6] = {0};
    int powercounts2[6] = {0};

    // Break the number down into powers of 2, 3, 5;
    getpowers(a, powercounts1);
    getpowers(b, powercounts2);

    int diff = abs(powercounts1[2] - powercounts2[2]) + abs(powercounts1[3] - powercounts2[3]) +
                abs(powercounts1[5] - powercounts2[5]);

    if(a != b){
        cout << -1 << endl;
    }
    else{
        cout << diff << endl;
    }

    return 0;
}

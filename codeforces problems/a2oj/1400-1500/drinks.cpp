#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int drinks;
    double total = 0;
    cin >> drinks;
    for(int i = 0; i < drinks; i++){
        double drink;
        cin >> drink;
        total += drink;
    }

    printf("%.12lf\n", total/drinks);


    return 0;
}

#include <bits/stdc++.h>

using namespace std;

void generateLuckys(vector<long long int> & arr){
    arr[1] = 4;
    arr[2] = 7;
    int count = 2;
    for(int i = 1; i <= 1025; i++){
        if(count + 2 <= 1025){
            arr[++count] = arr[i] * 10 + 4;
            arr[++count] = arr[i] * 10 + 7;
        }
    }
}


int main(){
    int left,right;
    cin >> left >> right;

    long long int sum = 0;
    vector<long long int> luckys(1025);

    generateLuckys(luckys);

    // Problem was that i was overflowing!!!
    for(long long int i = left; i <= right; i++){
        for(auto elem : luckys){
            // If we find a lucky number, then add all the numbers below it
            if(elem >= i){
                // Need to typecast int to lnog long to compare
                sum += elem * (min(elem, (long long)(right)) - i + 1);
                i = elem;
                break;
            }
        }
    }

    cout << sum << endl;


    //cout << sum << endl;

    return 0;
}

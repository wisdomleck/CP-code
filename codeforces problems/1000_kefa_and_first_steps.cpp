#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;
    vector<int> array;

    for(int i = 0; i < inputs; i++){
        int num;
        cin >> num;
        array.push_back(num);
    }

    int dp[inputs];

    dp[0] = 1;
    for(int i = 1; i < inputs; i++){
        if(array[i] >= array[i-1]){
            dp[i] = dp[i-1] + 1;
        }
        else{
            dp[i] = 1;
        }
    }

    int* ptr = max_element(dp, dp + inputs);

    cout << *ptr << endl;


    return 0;
}

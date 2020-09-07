#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    vector<int> array;
    for(int i = 0; i < inputs; i++){
        int number;
        cin >> number;
        array.push_back(number);
    }

    sort(array.begin(), array.end());

    int sum = 0;
    int total = accumulate(array.begin(), array.end(), 0);
    int coins = 0;

    while(sum <= total/2){
        sum += array.back();
        array.pop_back();
        coins++;
    }
    cout << coins << endl;

    return 0;
}

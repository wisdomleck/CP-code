#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    vector<int> array;
    for(int i = 0; i < inputs; i ++){
        int number;
        cin >> number;
        array.push_back(number);
    }

    unsigned long long int coinsLastPositive = abs(array[0] - 1);
    unsigned long long int coinsLastNegative = abs(array[0] + 1);

    for(int i = 1; i < inputs; i++){
        unsigned long long int temp1 = coinsLastNegative;
        unsigned long long int temp2 = coinsLastPositive;

        coinsLastPositive = min(temp2 + abs(array[i]-1), temp1 + abs(array[i]+1));
        coinsLastNegative = min(temp2 + abs(array[i]+1), temp1 + abs(array[i]-1));
    }

    cout << coinsLastPositive << endl;

    return 0;
}

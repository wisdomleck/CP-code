#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    vector<int> numbers;

    for(int i = 0; i < inputs; i ++){
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    sort(numbers.begin(), numbers.end());

    int prev = 0;
    for(int number : numbers){
        if(number - 1 != prev){
            cout << prev + 1 << endl;
            return 0;
        }
        prev = number;
    }

    cout << prev + 1 << endl;


    return 0;
}

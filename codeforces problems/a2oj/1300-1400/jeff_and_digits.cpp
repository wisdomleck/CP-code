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

    sort(numbers.begin(), numbers.end(), greater<int>());

    // Need a 0 to be divisible by 90
    if(numbers.back() != 0){
        cout << -1 << endl;
        return 0;
    }

    // otherwise find the largest sum of numbers divisbible by 9
    int sum = accumulate(numbers.begin(), numbers.end(), 0);

    int currsum = 0;
    bool output5 = false;

    for(auto elem : numbers){
        if(elem == 5){
            if(sum - currsum >= 45){
                output5 = true;
                cout << 5;
                currsum += 5;
            }
            else{
                if(45 - (currsum % 45) <= sum - currsum){
                    output5 = true;
                    cout << 5;
                    currsum += 5;
                }
            }
        }

        if(elem == 0 && !output5){
            cout << 0;
            return 0;
        }
        else if(elem == 0 && output5){
            cout << 0;
        }

    }

    return 0;
}

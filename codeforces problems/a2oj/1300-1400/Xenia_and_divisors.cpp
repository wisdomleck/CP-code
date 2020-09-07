#include <bits/stdc++.h>

using namespace std;

int main(){

    int inputs;
    cin >> inputs;

    map<int, int> numbers;

    for(int i = 1; i < 8; i ++){
        numbers.insert({i,0});
    }

    for(int i = 0; i < inputs; i++){
        int number;
        cin >> number;
        if(numbers.find(number) != numbers.end()){
            numbers[number] += 1;
        }
    }


    if(numbers[5] || numbers[7]){
        cout << -1 << endl;
        return 0;
    }

    if(numbers[1] == 0 || numbers[1] != numbers[2] + numbers[3] || numbers[1] != numbers[4] + numbers[6]){
        cout << -1 << endl;
    }
    else if(numbers[3] > numbers[6]){
        cout << -1 << endl;
    }
    else{
        while(numbers[3] > 0){
            cout << "1 3 6" << endl;
            numbers[1] -= 1;
            numbers[3] -= 1;
            numbers[6] -= 1;
        }
        while(numbers[2] > 0){
            if(numbers[4] > 0){
                cout << "1 2 4" << endl;
                numbers[1] -= 1;
                numbers[2] -= 1;
                numbers[4] -= 1;
            }
            else if(numbers[6] > 0){
                cout << "1 2 6" << endl;
                numbers[1] -= 1;
                numbers[2] -= 1;
                numbers[6] -= 1;
            }
        }
    }


    return 0;
}

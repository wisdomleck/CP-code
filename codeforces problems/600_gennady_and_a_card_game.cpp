#include <bits/stdc++.h>

using namespace std;

int main(){
    string inputcard;
    string cards[5];
    cin >> inputcard;
    for(auto i = 0; i < 5; i++){
        cin >> cards[i];
    }

    for(string card : cards){
        if(inputcard[0] == card[0] || inputcard[1] == card[1]){
            cout << "YES";
            return 0;
        }

    }
    cout << "NO";

    return 0;
}

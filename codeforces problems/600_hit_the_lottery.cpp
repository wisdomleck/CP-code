#include <bits/stdc++.h>

using namespace std;

int main(){

    int balance;
    int notes = 0;
    cin >> balance;

    while(balance > 0){
        if(balance >= 100){
            balance -= 100;
            notes ++;
        }
        else if(balance >= 20){
            balance -= 20;
            notes ++;
        }
        else if(balance >= 10){
            balance -= 10;
            notes ++;
        }
        else if(balance >= 5){
            balance -= 5;
            notes ++;
        }
        else if(balance >= 1){
            balance -= 1;
            notes ++;
        }

    }
    cout << notes;


    return 0;
}

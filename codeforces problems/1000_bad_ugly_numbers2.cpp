#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        int digits;
        cin >> digits;

        if(digits == 1){
            cout << "-1" << endl;
        }
        else{
            cout << "2";
            for(int i = 0; i < digits - 1; i++){
                cout << "3";
            }
            cout << endl;
        }
    }


    return 0;
}

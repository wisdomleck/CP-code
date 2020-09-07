#include <bits/stdc++.h>

using namespace std;

#define EPS 0.00000000001

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        int degrees;
        cin >> degrees;

        int sides = 3;
        bool found = false;
        while(!found){
            if((180.0 * (sides-2)/sides) > degrees){
                cout << "NO" << endl;
                break;
            }
            if((180.0 * (sides-2)/sides) == degrees){
                cout << "YES" << endl;
                break;
            }
            sides ++;
        }
    }


    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int input;
    cin >> input;

    // Print upper half
    for(int i = 0; i < input; i ++){
        // Spaces before each number
        int spaces = 2 * (input - i);
        for(auto j = 0; j < spaces; j++){
            cout << " ";
        }

        // Print out numbers increasing
        for(auto k = 0; k <= i; k ++){
            if(i == 0){
                cout << k;
            }
            else{
                cout << k << " ";
            }
        }

        // Print out numbers decreasing
        for(auto l = i; l > 0; l --){
            if(l == 1){
                cout << l - 1;
            }
            else{
                cout << l - 1 << " ";
            }

        }
        cout << endl;
    }

    // Print lower half
    for(int i = input; i >= 0; i --){
        // Spaces before each number
        int spaces = 2 * (input - i);

        for(auto j = 0; j < spaces; j++){
            cout << " ";
        }

        // Print out numbers increasing
        for(auto k = 0; k <= i; k ++){
            if(i == 0){
                cout << k;
            }
            else{
                cout << k << " ";
            }
        }

        // Print out numbers decreasing

        for(auto l = i; l > 0; l --){
            if(l == 1){
                cout << l - 1;
            }
            else{
                cout << l - 1 << " ";
            }
        }
        //??
        cout << endl;
    }


    return 0;
}

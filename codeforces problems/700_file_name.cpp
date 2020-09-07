#include <bits/stdc++.h>

using namespace std;

int main(){
    int inarow = 0;
    int cutoffs = 0;

    int stringlength;
    string inputstring;

    cin >> stringlength;
    cin >> inputstring;

    for(auto character : inputstring){
        if(character == 'x'){
            inarow ++;
        }
        else{
            inarow = 0;
        }
        if(inarow >= 3){
            cutoffs++;
        }
    }

    cout << cutoffs;


    return 0;
}

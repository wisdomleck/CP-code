#include <bits/stdc++.h>

using namespace std;

int main(){
    string inputstring;
    cin >> inputstring;

    int caps = 0;
    int lower = 0;

    for(auto x : inputstring){
        if(isupper(x)){
            caps ++;
        }
        else{
            lower ++;
        }
    }

    if(lower >= caps){
        for(auto & x: inputstring){
            x = tolower(x);
        }
    }
    else{
        for(auto & x: inputstring){
            x = toupper(x);
        }
    }

    cout << inputstring;

    return 0;
}

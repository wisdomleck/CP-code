#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputnum;
    cin >> inputnum;
    int counter = 0;
    for(int i = 1; i < inputnum; ++i){
        if(inputnum % i == 0){
            counter++;
        }

    }
    cout << counter;

    
    return 0;
}

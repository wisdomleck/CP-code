#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputnum;
    cin >> inputnum;

    int n;
    bool isodd = false;

    if(inputnum % 2 == 0){
        n = inputnum / 2;
    }
    else{
        n = (inputnum-1)/2;
        isodd = true;
    }

    cout << inputnum/2 << endl;

    for(int i = 0; i < n-1; ++i){
        cout << "2 ";
    }

    if(isodd){
        cout << "3";
    }
    else{
        cout << "2";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    string base = "I hate ";
    string end = "it";
    string even = "that I love ";
    string odd = "that I hate ";

    int num;
    cin >> num;

    cout << base;
    for(int i = 2; i <= num; i++){
        if(i % 2 == 0){
            cout << even;
        }
        if( i % 2 == 1){
            cout << odd;
        }

    }
    cout << end;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    string string1;
    string string2;

    cin >> string1 >> string2;

    for(auto & c : string1){
        c = tolower(c);
    }

    for(auto & c : string2){
        c = tolower(c);
    }

    for(auto i = 0; i < string1.size(); ++i){
        if(string1[i] > string2[i]){
            cout << "1" << endl;
            return 0;
        }
        if(string1[i] < string2[i]){
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;


    return 0;
}

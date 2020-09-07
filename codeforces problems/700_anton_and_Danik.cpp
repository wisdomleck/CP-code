#include <bits/stdc++.h>

using namespace std;

int main(){
    int length;
    cin >> length;
    string inputstring;
    cin >> inputstring;

    int anton = 0;
    int danik = 0;

    for(auto chara: inputstring){
        if(chara == 'A'){
            anton ++;
        }
        else if(chara == 'D'){
            danik ++;
        }
    }

    if(anton > danik){
        cout << "Anton";
    }
    else if(danik > anton){
        cout << "Danik";
    }
    else if(danik == anton){
        cout << "Friendship";
    }

    return 0;

}

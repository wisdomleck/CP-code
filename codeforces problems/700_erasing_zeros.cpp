#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    string input;
    cin >> inputs;

    vector<int> vect;

    for(auto i = 0; i < inputs; ++i){
        bool firstone = false;

        int currentgap = 0;
        int totalgap = 0;

        cin >> input;
        for(auto letter : input){
            if(letter == '1' && !firstone){
                firstone = true;
                currentgap = 0;
                continue;
            }

            if(letter == '1'){
                totalgap += currentgap;
                currentgap = 0;
            }
            else if(letter == '0'){
                currentgap ++;
            }
        }

        vect.push_back(totalgap);
    }

    for(auto i = 0; i < inputs - 1; i++){
        cout << vect[i] << endl;
    }
    cout << vect[inputs-1];

    return 0;
}

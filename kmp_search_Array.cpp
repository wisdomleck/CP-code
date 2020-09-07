#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i = 0; i < 100; i++){
        string pattern;
        cin >> pattern;
        vector<int> farray(pattern.size());


        int s = 2;
        int c = 0;
        farray[0] = -1;
        farray[1] = 0;

        while(s < pattern.size()){
            if(pattern[c] == pattern[s-1]){
                c = c + 1;
                farray[s] = c;
                s = s + 1;
            }
            else if(c > 0){
                c = farray[c];
            }
            else{
                farray[s] = 0;
                s = s + 1;
            }
        }

        // printf
        for(auto elem : pattern){
            cout << elem << " |";
        }
        cout << endl;

        for(auto elem: farray){
            if(elem == -1){
                cout << elem << "|";
            }
            else{
                cout << elem << " |";
            }

        }
    }


    return 0;
}

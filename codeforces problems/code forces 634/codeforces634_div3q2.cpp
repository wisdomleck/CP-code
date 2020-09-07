#include <bits/stdc++.h>

using namespace std;

int numUnique(string s){
    map<char,int> counts;
    for(auto character : s){
        if(counts.find(character) == counts.end()){
            counts.insert({character, 1});
        }
        else{
            counts[character] += 1;
        }
    }
    return counts.size();
}

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        int n, a, b;
        cin >> n >> a >> b;
        string outputstring = "";
        char character = 'a';
        int index = 0;
        // For every string of length n,
        for(int j = 0; j < n; j++){

            // Index to start substring
            if(outputstring.size() < a){
                index = 0;
            }
            else{
                index ++;
            }

            if(numUnique(outputstring.substr(index, a)) < b) {
                character += 1;
                // Reset character
                if(character == ('z' + 1)){
                    character = 'a';
                }
                outputstring += character;
            }
            else{
                outputstring += character;
            }
        }
        cout << outputstring << endl;
    }

    return 0;
}

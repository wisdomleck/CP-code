#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;
    vector<int> s;

    for(int i = 0; i < inputs; i ++){
        int input;
        cin >> input;
        s.push_back(input);
    }

    int maxseq = 0;
    int currseq = 0;

    if(s.size() <= 2){
        cout << s.size() << endl;
        return 0;
    }

    for(int i = 2; i < s.size(); i++){
        if(s[i] == s[i-1] + s[i-2]){
            currseq += 1;
            if(currseq > maxseq){
                maxseq = currseq;
            }
        }
        else{
            currseq = 0;
        }
    }

    cout << maxseq + 2 << endl;

    return 0;
}

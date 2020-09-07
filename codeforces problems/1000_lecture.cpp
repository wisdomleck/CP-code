#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,string> translations;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        string string1;
        string string2;
        cin >> string1 >> string2;
        translations.insert({string1, string2});
    }

    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;

        if(temp.size() <= translations[temp].size()){
            cout << temp << " ";
        }
        else{
            cout << translations[temp] << " ";
        }
    }
    return 0;
}

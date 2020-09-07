#include <bits/stdc++.h>

using namespace std;

int main(){
    string string1;
    string string2;

    cin >> string1 >> string2;

    if(string1 == string2){
        cout << -1 << endl;
        return 0;
    }
    else if(string1.size() == string2.size()){
        cout << string1.size() << endl;
    }
    else{
        cout << max(string1.size(), string2.size()) << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    string string1;
    string string2;
    string string3;

    cin >> string1 >> string2 >> string3;

    string total;
    total += string1;
    total += string2;

    sort(total.begin(), total.end());
    sort(string3.begin(), string3.end());

    if(total == string3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}

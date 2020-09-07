#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    string b;
    string c;

    int numinputs;
    cin >> numinputs;


    for(int i = 0; i < numinputs; i++){
        cin >> a >> b >> c;
        bool cando = true;
        for(int j = 0; j < c.size(); j++){
            if(c[j] != a[j] && c[j] != b[j]){
                cout << "NO" << endl;
                cando = false;
                break;
            }
        }
        if(cando == true){
            cout << "YES" << endl;
        }
    }

    return 0;
}

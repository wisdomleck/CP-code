#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    string str;
    cin >> num;

    int faces = 0;
    for(auto i = 0; i < num; i++){
        cin >> str;
        if(str == "Icosahedron"){
            faces += 20;
        }
        else if(str == "Cube"){
            faces += 6;
        }
        else if(str == "Octahedron"){
            faces += 8;
        }
        else if(str == "Dodecahedron"){
            faces += 12;
        }
        else if(str == "Tetrahedron"){
            faces += 4;
        }
    }
    cout << faces;

    return 0;
}

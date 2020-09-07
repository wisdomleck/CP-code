/*#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    vector<int> s;

    for(int i = 0; i < inputs; i++){
        int input;
        cin >> input;
        s.push_back(input);
    }

    sort(s.begin(), s.end(), greater<int>());

    return 0;
}*/

#include <iostream>
#include <algorithm>
using namespace std;
int a, mas[105];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + a);
    swap(mas[0], mas[a - 1]);
    for (int i = 0; i < a; i++) {
        cout << mas[i] << " ";
    }
}

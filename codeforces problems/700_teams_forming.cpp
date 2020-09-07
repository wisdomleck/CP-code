#include <bits/stdc++.h>

using namespace std;

int main(){
    int length;
    cin >> length;

    int array[length];

    for(auto i = 0; i < length; ++i){
        cin >> array[i];
    }

    sort(array, array + length);

    int problems = 0;
    for(auto i = 0; i < length; i += 2){
        problems += array[i+1] - array[i];
    }

    cout << problems;

    return 0;
}

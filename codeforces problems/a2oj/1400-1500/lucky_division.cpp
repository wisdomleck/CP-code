#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

void generateLuckys(int* array){
    array[0] = 4;
    array[1] = 7;
    int count = 2;
    for(int i = 0; i < 100; i++){
        array[count++] = array[i] * 10 + 4;
        array[count++] = array[i] * 10 + 7;
    }
}


int main(){
    int n;
    cin >> n;
    //cout << "READ: " << n << endl;
    int array[500];

    generateLuckys(array);

    for(int i = 0; i < 500; i++){
        if(n % array[i] == 0){
            cout << "YES" << endl;
            //cout << n << " " << array[i] << endl;
            return 0;
        }
        if(array[i] > n){
            break;
        }
    }

    cout << "NO" << endl;

    return 0;
}

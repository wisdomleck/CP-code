#include <bits/stdc++.h>

using namespace std;

int main(){
    int array[4];
    cin >> array[0] >> array[1] >> array[2] >> array[3];

    sort(array, array+4);

    int largest = array[3];

    int a = largest - array[0];
    int b = largest - array[1];
    int c = largest - array[2];

    cout << a << " " << b << " " << c;


    return 0;
}

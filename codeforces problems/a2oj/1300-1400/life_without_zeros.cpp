#include <bits/stdc++.h>

using namespace std;

int removeZeros(int number){
    int temp = 0;
    int tens = 1;
    while(number > 0){
        int remainder = number % 10;
        if(remainder != 0){
            temp += remainder * tens;
            tens *= 10;
        }
        number /= 10;
    }
    return temp;
}


int main(){
    int a, b;
    cin >> a >> b;

    int c = a + b;
    if(removeZeros(a) + removeZeros(b) == removeZeros(c)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}

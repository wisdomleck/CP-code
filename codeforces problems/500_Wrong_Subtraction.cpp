#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    for(int i = 0; i < num2; i++){
        if(num1 % 10 != 0){
            num1--;
        }
        else{
            num1 = num1/10;
        }
    }
    cout << num1;
    return 0;
}

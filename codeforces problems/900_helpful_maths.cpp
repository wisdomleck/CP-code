#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin >> input;

    int ones = 0;
    int twos = 0;
    int threes = 0;

    for(auto c : input){
        if(c == '1'){
            ones++;
        }
        else if(c == '2'){
            twos++;
        }
        else if(c == '3'){
            threes++;
        }
    }

    bool printedfirst = false;
    string output ;

    while(ones + twos + threes > 0){
        if(ones > 0){
            output += "1+";
            ones--;
        }
        else if(twos > 0){
            output += "2+";
            twos--;
        }
        else if(threes > 0){
            output += "3+";
            threes--;
        }
    }

    output.pop_back();

    cout << output;

    return 0;
}

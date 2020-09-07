#include <bits/stdc++.h>

using namespace std;

int lcm(int, int);
int gcd(int, int);

int main(){
    int numinputs;
    cin >> numinputs;

    for(auto i = 0; i < numinputs; i++){
        int num;
        cin >> num;
        cout << 1 << " " << num - 1 << endl;
    }


    return 0;
}


int lcm(int a, int b){
    int multiple = max(a,b);
    bool found = false;
    while(!found){
        if(multiple % a == 0 && multiple % b == 0){
            return multiple;
        }
        multiple ++;
    }
}

int gcd(int a, int b){
    for(int i = min(a,b); i > 0; --i){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

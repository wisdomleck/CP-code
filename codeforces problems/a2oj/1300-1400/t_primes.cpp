#include <bits/stdc++.h>

using namespace std;

vector<int> sieveerato(int n){
    vector<int> primes;

    // Keeps track of prime status for numbers 1....n
    vector<bool> isprime(n + 1, true);
    isprime[0] = false;
    isprime[1] = false;

    for(int i = 2; i*i <= n; i++){
        if(isprime[i]){
            for(int j = i*i; j <= n; j += i){
                isprime[j] = false;
            }
        }
    }

    for(int i = 0; i < n+1; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int inputs;
    cin >> inputs;


    // generate set of inputs
    vector<int> s = sieveerato(10e6);
    set<long long int> s2;

    for(long long int elem : s){
        s2.insert(elem*elem);
    }

    for(int c = 0; c < inputs; c++){
        long long int input;
        cin >> input;
        if(s2.count(input)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

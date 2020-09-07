#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    vector<int> s;
    for(int i = 0; i < inputs; i ++){
        int apple;
        cin >> apple;
        s.push_back(apple);
    }

    sort(s.begin(), s.end(), greater<int>());

    int sum1 = 0;
    int sum2 = 0;

    for(auto elem : s){
        if(sum1 <= sum2){
            sum1 += elem;
        }
        else{
            sum2 += elem;
        }
    }

    if(sum1 == sum2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;

    }

    return 0;
}

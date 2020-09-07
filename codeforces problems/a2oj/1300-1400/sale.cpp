#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<int> prices;

    int money = 0;
    for(int i = 0; i < n; i++){
        int price;
        cin >> price;
        prices.push_back(price);
    }

    sort(prices.begin(), prices.end());

    for(auto elem : prices){
        if(m > 0 && elem < 0){
            m --;
            money -= elem;
        }
    }

    cout << money << endl;

    return 0;
}

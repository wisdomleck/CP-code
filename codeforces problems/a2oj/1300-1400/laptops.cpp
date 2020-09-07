#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;
    vector<pair<int,int>> laptops;

    for(int i = 0; i < inputs; i++){
        int a,b;
        cin >> a >> b;
        laptops.push_back({a,b});
    }

    sort(laptops.begin(), laptops.end());

    int bestquality = 0;
    for(auto elem : laptops){
        if(elem.second > bestquality){
            bestquality = elem.second;
        }
        else{
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}

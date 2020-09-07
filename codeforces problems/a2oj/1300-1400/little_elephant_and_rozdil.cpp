#include <bits/stdc++.h>

using namespace std;

#define INF 1e9 + 5

int main(){
    int input;
    cin >> input;

    vector<int> arr;

    int min = INF;
    int mindex = 0;
    bool repeated = false;

    for(int i = 0; i < input; i++){
        int city;
        cin >> city;

        if(city < min){
            repeated = false;
            mindex = i + 1;
            min = city;
        }
        else if(city == min){
            repeated = true;
        }
    }

    if(repeated){
        cout << "Still Rozdil" << endl;
    }
    else{
        cout << mindex << endl;
    }




    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    string inputstring;
    cin >> inputstring;

    int numqs = 0;
    for(auto letter : inputstring){
        if(letter == 'Q'){
            numqs ++;
        }
    }

    vector<tuple<int,int>> array;

    vector<pair<int,int>> array2;

    int currentqs = 0;
    for(auto letter : inputstring){
        if(letter == 'Q'){
            currentqs ++;
        }
        else if(letter == 'A'){
            array.push_back(make_tuple(currentqs, numqs - currentqs));
            array2.push_back(make_pair(currentqs, numqs - currentqs));
        }
    }

    int numways = 0;
    int numways2 = 0;

    for(auto elem : array){
        numways += get<0>(elem) * get<1>(elem);
    }

    for(pair<int,int> elem : array2){
        numways2 += elem.first * elem.second;
    }

    cout << numways2 << endl;
    return 0;
}

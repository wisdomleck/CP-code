#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s;
    vector<int> pos;
    vector<int> neg;
    vector<int> zero;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        s.push_back(num);
    }

    sort(s.begin(), s.end());

    int numneg = 0;

    for(auto elem : s){
        if(elem < 0 ){
            numneg++;
        }
    }

    if(numneg % 2 == 0){
        neg.push_back(s[0]);
        zero.push_back(s[1]);
        for(int i = 2; i < s.size(); i++){
            if(s[i] != 0){
                pos.push_back(s[i]);
            }
            else{
                zero.push_back(s[i]);
            }
        }
    }
    else{
        neg.push_back(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(s[i] != 0){
                pos.push_back(s[i]);
            }
            else{
                zero.push_back(s[i]);
            }
        }
    }

    cout << neg.size() << " ";
    for(auto elem : neg){
        cout << elem << " ";
    }
    cout << endl;
    cout << pos.size() << " ";
    for(auto elem : pos){
        cout << elem << " ";
    }
    cout << endl;
    cout << zero.size() << " ";
    for(auto elem : zero){
        cout << elem << " ";
    }


    return 0;
}

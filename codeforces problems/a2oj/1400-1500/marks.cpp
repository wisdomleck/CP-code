#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int stu, sub;
    cin >> stu >> sub;

    int s2[100] = {0};

    vector<string> s;

    for(int i = 0; i < stu; i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }


    for(int j = 0; j < sub; j++){
        char maxchar = '1';
        for(int i = 0; i < stu; i++){
            maxchar = max(maxchar, s[i][j]);
        }
        for(int i = 0; i < stu; i++){
            if(s[i][j] == maxchar){
                s2[i] = 1;
            }
        }
    }

    int total = 0;
    total = accumulate(s2, s2+100, 0);

    cout << total << endl;

    return 0;
}

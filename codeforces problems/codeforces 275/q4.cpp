#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

long long cumsum(long long n){
    return (n*(n+1)/2);
}

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> days;
    for(int i = 0; i < n; i++){
        int day;
        cin >> day;
        days.push_back(day);
    }

    //days.insert(days.begin(), days.begin(), days.end());

    int max = 0;
    int curr = 0;
    int visits = x;
    int maxindex = 0;

    // can go forwards or backwards
    for(int i = 0; i < days.size(); i++){
        if(visits > 0){
            curr += cumsum((long long)days[i]);
            visits -= days[i];
        }

        else if(visits <= 0){
            if(curr > max){
                maxindex = i - 1;
                max = curr;
                cout << i << " " << curr << endl;
            }
            visits = x;
            curr = 0;
        }

    }

    cout << maxindex << endl;

    int i = maxindex;
    long long ans = 0;
    while(x > 0){
        if(x > days[i]){
            ans += (long long)cumsum(days[i]);
            i--;
            x -= days[i];
        }
        else{
            for(int i = days[i]; i >= 0; i--){
                ans += i;
            }
            break;
        }
    }
    cout << "HELLO" << endl;
    cout << (long long)ans << endl;

    return 0;
}

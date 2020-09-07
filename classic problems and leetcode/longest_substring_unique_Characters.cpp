#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int lengthOfLongestSubstring(string s) {
    int i = 0;
    int j = 0;
    int n = s.length();
    int maxans = 0;
    int comparisons = 0;

    unordered_set<char> ss;

    while(i < n && j < n){
        if(!ss.count(s[j])){
            ss.insert(s[j++]);
            maxans = max(maxans, j - i);
        }
        else if(ss.count(s[j])){
                ss.erase(s[i++]);
        }
        comparisons ++;
    }
    cout << "LENGTH: " << s.length() << endl;
    cout << "COMPARISONS: " << comparisons << endl;
    return maxans;
}

int main(){
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    cout << lengthOfLongestSubstring(s) << endl;


    return 0;
}

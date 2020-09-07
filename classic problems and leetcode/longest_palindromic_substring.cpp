#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;


bool inrange(int num, int length){
    return (num >= 0 && num < length);
}

string expand(string s, int left, int right){
    while(inrange(left, s.length()) && inrange(right, s.length())
            && (s[left] == s[right])){
        left--;
        right++;
    }
    return s.substr(left+1, right-left-1);
}

int main(){
    string a = "abbb";
    int n = a.length();
    int maxlen = 0;
    int start;
    int end;
    string outstring;

    for(int i = 0; i < n; i++){
        string s1 = expand(a, i, i);
        string s2 = expand(a, i, i+1);
        if(s1.length() > maxlen){
            maxlen = s1.length();
            outstring = s1;
        }
        if(s2.length() > maxlen){
            maxlen = s2.length();
            outstring = s2;
        }
    }

    cout << outstring << endl;



    return 0;
}

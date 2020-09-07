
#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

bool isSuperLucky(long long num){
    int fours = 0;
    int sevens = 0;
    while(num > 0){
        int remainder = num % 10;
        if(remainder == 4){
            fours ++;
        }
        else{
            sevens ++;
        }
        num /= 10;
    }

    return (fours == sevens);
}

void generateLuckys(vector<long long int> & supers){
    long long arr[10000];
    arr[1] = 4;
    arr[2] = 7;
    int count = 2;
    for(int i = 1; i <= 10000; i++){
        if(count + 2 <= 10000){
            arr[++count] = arr[i] * 10 + 4;
            arr[++count] = arr[i] * 10 + 7;
        }
    }
    for(int i = 0; i < 10000; i++){
        if(isSuperLucky(arr[i])){
            supers.push_back(arr[i]);
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<long long> superluckys;
    generateLuckys(superluckys);


    int lo = 0;
    int hi = superluckys.size() - 1;
    int mid;
    int firsttrue = 1e9 + 5;

    /*for(auto elem : superluckys){
        cout << elem << endl;
    }*/

    while(lo <= hi){
        mid = (lo+hi)/2;
        // Look left
        if(n <= superluckys[mid]){
            if(mid < firsttrue){
                firsttrue = mid;
            }
            hi = mid - 1;
        }
        // Look right
        else{
            lo = mid + 1;
        }
    }

    cout << superluckys[firsttrue] << endl;


    return 0;
}

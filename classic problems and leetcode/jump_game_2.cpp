#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

pair<bool, int> solve(vector<int> nums){
    int n = nums.size();
    int reachable = 0;
    int maxreachable = 0;

    // include the first index as a "jump"
    int jumps = 0;

    for(int pos = 0; pos < n-1; ){
        reachable = max(reachable, pos + nums[pos]);
        maxreachable = reachable;
        for(int i = pos+1; i <= reachable; i++){
            if(i + nums[i] > maxreachable){
                maxreachable = i + nums[i];
                pos = i;
            }
        }
        if(maxreachable == reachable){
            return {false, 0};
        }
        jumps++;
    }

    if(maxreachable >= n - 1){
        return {true, jumps};
    }

    return {false,0};
}


int main(){
    vector<int> nums = {2,1,3,2,2,2,0,0,4,1,1,1,1,1,1,1};
    auto ans = solve(nums);
    if(ans.first == true){
        cout << "Possible, " << ans.second << " steps" << endl;
    }else{
        cout << "Impossible ";
    }


    return 0;
}

#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;

    int left = 0;
    int right = nums.size() - 1;
    int currsum;

    vector<int> numscopy;
    for(int i = 0; i < nums.size(); i++){
        numscopy.push_back(nums[i]);
    }

    sort(numscopy.begin(), numscopy.end());

    while(left <= right){
        currsum = numscopy[left] + numscopy[right];
        if(currsum == target){
            for(int i = 0; i < nums.size(); i++){
                if(numscopy[left] == nums[i]){
                    ans.push_back(i);
                }
                else if(numscopy[right] == nums[i]){
                    ans.push_back(i);
                }
            }
            return ans;
        }
        else if(currsum > target){
            right--;
        }
        else{
            left++;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {3,4,2,5,8,11};
    int target = 12;

    vector<int> ans = twoSum(a, target);

    for(auto elem : ans){
        cout << elem << " ";
    }


    return 0;
}

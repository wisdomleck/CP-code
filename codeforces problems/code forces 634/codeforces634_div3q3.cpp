#include <bits/stdc++.h>

using namespace std;

pair<int,int> numUnique(vector<int> s){
    map<int,int> counts;
    // Find unique values in dict
    for(auto number : s){
        if(counts.find(number) == counts.end()){
            counts.insert({number, 1});
        }
        else{
            counts[number] += 1;
        }
    }
    // Now find the max frequency
    int largest = 1;

    for(map<int,int>::iterator it = counts.begin(); it != counts.end(); it++){
        if(it->second > largest){
            largest = it->second;
        }
    }
    return make_pair(counts.size(), largest);
}

int main(){
    int numinputs;
    cin >> numinputs;

    for(int i = 0; i < numinputs; i++){
        vector<int> members;
        int numMembers;
        cin >> numMembers;

        for(int j = 0; j < numMembers; j++){
            int input;
            cin >> input;
            members.push_back(input);
        }
        // Now just check frequency of distinct, and frequency of max.
        pair<int,int> temp = numUnique(members);
        int teamsize = members.size() / 2;

        // Case of uniques overlapping with most freq
        if(temp.first == temp.second){
            temp.second -= 1;
        }

        cout << min(min(temp.first, temp.second), teamsize) << endl;

    }


    return 0;
}

// WORKS BUT IS BRUTE FORCING O(2^N)

#include <bits/stdc++.h>

using namespace std;

bool isThreePalin(vector<int> array);

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Recursive function to print all
// possible subsequences for given array
void printSubsequences(vector<int> arr, int index,
                       vector<int> subarr, int & currmax)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == arr.size())
    {
        int l = subarr.size();

        // Condition to avoid printing
        // empty subsequence
        if (l != 0){
            //printArray(subarr, l);
            if(isThreePalin(subarr)){
                if(subarr.size() > currmax){
                    currmax = subarr.size();
                }
            }
        }
    }
    else
    {
        // Subsequence without including
        // the element at current index
        printSubsequences(arr, index + 1, subarr, currmax);

        subarr.push_back(arr[index]);

        // Subsequence including the element
        // at current index
        printSubsequences(arr, index + 1, subarr, currmax);
    }
    return;
}

bool isThreePalin(vector<int> array){
    int switches = 0;
    vector<int>::iterator left = array.begin();
    vector<int>::iterator right = array.end() - 1;
    int prev = array[0];

    while(left <= right){
        if(*left != *right){
            return false;
        }
        if(*left != prev){
            switches++;
        }

        prev = *left;
        advance(left, 1);
        advance(right, -1);
    }

    if(switches >= 2){
        return false;
    }
    return true;

}

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        int a;
        cin >> a;

        vector<int> array;
        for(int j = 0; j < a; j++){
            int n;
            cin >> n;
            array.push_back(n);
        }

        vector<int> temp;
        int tempmax = 0;
        printSubsequences(array, 0, temp, tempmax);
        cout << tempmax << endl;
    }


    return 0;
}

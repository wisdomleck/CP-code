#include <bits/stdc++.h>

using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;

    vector<string> s;

    for(int i = 0; i < rows; i++){
        string input;
        cin >> input;
        s.push_back(input);
    }
    // Lambda function to check if row and col is in boundary
    auto inside = [&](int row, int col){
        return 0 <= row && row < rows && 0 <= col && col < cols;
    };

    // Possible directions a wolf can eat a pig
    vector<pair<int,int>> directions = {{0, -1}, {0, 1}, {-1,0}, {1, 0}};

    int pigs = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(s[i][j] == 'W'){
                // check every direction for pig
                for(auto direction : directions){
                    int x = i + direction.first;
                    int y = j + direction.second;
                    if(inside(x,y) && s[x][y] == 'P'){
                        pigs += 1;
                        s[x][y] = '.';
                        break;
                    }
                }
            }
        }
    }

    cout << pigs << endl;


    return 0;
}

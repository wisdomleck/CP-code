#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        vector<string> board;
        string s;
        for(int j = 0; j < 9; j ++){
            cin >> s;
            board.push_back(s);
        }

        int firstbox = 0;
        int secondbox = 3;
        int thirdbox = 6;
        // For each box row, add each element in every different box, row by 1
        for(int k = 0; k < 9; k++){
            if(board[k][firstbox] != '9'){
                board[k][firstbox] = char(board[k][firstbox] + 1);
            }
            else{
                board[k][firstbox] = '1';
            }

            k++;
            firstbox++;

            if(board[k][secondbox] != '9'){
                board[k][secondbox] = char(board[k][secondbox] + 1);
            }
            else{
                board[k][secondbox] = '1';
            }

            k++;
            secondbox++;

            if(board[k][thirdbox] != '9'){
                board[k][thirdbox] = char(board[k][thirdbox] + 1);
            }
            else{
                board[k][thirdbox] = '1';
            }
            thirdbox++;

        }
        cout << endl;
        for(auto elem: board){
            cout << elem << endl;
        }
    }
    return 0;
}

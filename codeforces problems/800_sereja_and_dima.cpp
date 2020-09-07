#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    vector<int> cards;

    int sereja = 0;
    int dima = 0;

    cin >> inputs;
    for(int i = 0; i < inputs; i++){
        int card;
        cin >> card;
        cards.push_back(card);
    }

    // Begin gives iterator pointer to first elem,
    // end gives pointer to past last element
    vector<int>::iterator itrleft = cards.begin();
    vector<int>::iterator itrright = cards.end();
    advance(itrright, -1);

    for(int i = 0; i < inputs; i++){
        if(i % 2 == 0){
            if(*itrleft > *itrright){
                dima += *itrleft;
                advance(itrleft, 1);
            }
            else{
                dima += *itrright;
                advance(itrright, -1);
            }
        }
        else{
            if(*itrleft > *itrright){
                sereja += *itrleft;
                advance(itrleft, 1);
            }
            else{
                sereja += *itrright;
                advance(itrright, -1);
            }
        }
    }

    cout << dima << " " << sereja;


    return 0;
}

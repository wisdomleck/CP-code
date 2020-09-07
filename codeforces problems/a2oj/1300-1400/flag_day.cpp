#include <bits/stdc++.h>

//ios::sync_with_stdio(0);
//cin.tie(0); use if input and output are a bottleneck

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int dancers[100001] = {0};

    for(int i = 0; i < m; i++){
        int d1,d2,d3;
        cin >> d1 >> d2 >> d3;

        if(!dancers[d1] && !dancers[d2] && !dancers[d3]){
            dancers[d1] = 1;
            dancers[d2] = 2;
            dancers[d3] = 3;
        }
        else if(dancers[d1]){
            if(dancers[d1] == 1){
                dancers[d2] = 2;
                dancers[d3] = 3;
            }
            else if(dancers[d1] == 2){
                dancers[d2] = 1;
                dancers[d3] = 3;
            }
            else if(dancers[d1] == 3){
                dancers[d2] = 1;
                dancers[d3] = 2;
            }
        }
        else if(dancers[d2]){
            if(dancers[d2] == 1){
                dancers[d1] = 2;
                dancers[d3] = 3;
            }
            else if(dancers[d2] == 2){
                dancers[d1] = 1;
                dancers[d3] = 3;
            }
            else if(dancers[d2] == 3){
                dancers[d1] = 1;
                dancers[d3] = 2;
            }
        }
        else if(dancers[d3]){
            if(dancers[d3] == 1){
                dancers[d1] = 2;
                dancers[d2] = 3;
            }
            else if(dancers[d3] == 2){
                dancers[d1] = 1;
                dancers[d2] = 3;
            }
            else if(dancers[d3] == 3){
                dancers[d1] = 1;
                dancers[d2] = 2;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << dancers[i] << " ";
    }



    return 0;
}

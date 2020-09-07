// Problem fails for n = 10000 digits (runtime error)
// Solution possibly could be to print 2333.....333 as a string,
// as 233...3333 works for any n >= 2
#include <bits/stdc++.h>

using namespace std;

int main(){
    int inputs;
    cin >> inputs;

    for(int i = 0; i < inputs; i++){
        int digits;
        cin >> digits;

        int outnum = pow(10,digits-1);

        while(outnum < pow(10,digits)){
            int copy = outnum;

            // Test every digit
            while(copy > 0){
                int digit = copy % 10;
                if(digit == 0){
                    break;
                }
                if(outnum % digit == 0){
                    break;
                }
                copy /= 10;
            }
            if(copy == 0){
                cout << outnum << endl;
                break;
            }
            outnum ++;
            if(outnum == pow(10,digits)){
                cout << "-1" << endl;
            }
        }
    }


    return 0;
}

#include <bits/stdc++.h>


using namespace std;

int main(){
    int numinputs;
    cin >> numinputs;
    vector<string> stringarray;

    for(auto i = 0; i < numinputs; i++){
        string inputstring;
        cin >> inputstring;

        if(inputstring.size() <= 10){
            stringarray.push_back(inputstring);
        }
        else{
            string outputstring;
            outputstring += inputstring[0];
            outputstring += to_string(inputstring.size() - 2);
            outputstring += inputstring[inputstring.size() - 1];
            stringarray.push_back(outputstring);

        }
    }

    string last = stringarray[numinputs-1];
    stringarray.pop_back();
    for(auto elem: stringarray){
        cout << elem << endl;
    }
    cout << last << endl;

    return 0;
}

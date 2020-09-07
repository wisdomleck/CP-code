#include <iostream>

using namespace std;

int main(){
    cout << "Enter a bunch of numbers: \n";

    int inputnum;
    int sum = 0;
    int numnums = 0;

    while(cin >> inputnum){
        sum += inputnum;
        numnums++;
    }

    cout << "AVERAGE: " << double(sum)/numnums << "\n";

    return 0;
}

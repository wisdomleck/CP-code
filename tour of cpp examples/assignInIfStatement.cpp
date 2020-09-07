#include <iostream>

using namespace std;

int double_num(int number);

int main(){
    cout << "Enter a number: \n";
    int input;
    cin >> input;

    if(auto k = double_num(input); k != 8){
        cout << "The double of the number you have entered is not 8\n";
    }
    else{
        cout << "The nubmer you entered is 4\n";
    }


    return 0;
}

int double_num(int number){
    return 2*number;
}

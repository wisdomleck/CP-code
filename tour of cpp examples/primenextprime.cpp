#include <iostream>

using namespace std;

bool isprime(int number);

int main(){
    cout << "Please enter a number to check primeness: \n";
    int input = 0;
    cin >> input;
    cout << "Input: " << input << "\n";

    if(input < 0){
        cout << "Enter a non-negative number and try again\n";
        return 0;
    }
    
    if(isprime(input)){
        cout << input << " is a prime number\n";
    }
    else if(!isprime(input)){
        cout << input << " is not a prime number\n";
    }

    // Find the next
    bool foundNext = false;
    input++;
    while(!foundNext){
        if(isprime(input)){
            cout << "The next prime number is " << input;
            break;
        }
        input++;
    }
    return 0;
}

bool isprime(int number){
    for(int i = 2; i * i <= number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

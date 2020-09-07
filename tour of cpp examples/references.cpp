#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 5;
    int& r1 = x;
    int& r2 = y;
    r1 = r2;

    cout << r1;
    // References are pointers that can' be reassigned. What can be reassigned
    // is the value or object that it is pointing to. A reference stays loyal
    
    return 0;
}

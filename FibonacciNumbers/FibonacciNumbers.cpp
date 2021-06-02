#include <iostream>
using namespace std;


int Recursion(int n){
    if (n <= 1) {
        return n;
    }
    return Recursion(n - 1) + Recursion(n - 2);
}

int main() {
    int input;
    cout << "Welcome, Please write a number to get the Fibonacci number" << endl;
    cin >> input;
    cout << Recursion(input);
    return 0;
}

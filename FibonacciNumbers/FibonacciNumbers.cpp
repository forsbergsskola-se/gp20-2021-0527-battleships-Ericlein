#include <iostream>
using namespace std;


int Recursion(int n){
    if (n <= 1) {
        return n;
    }
    return Recursion(n - 1) + Recursion(n - 2);
}

int iteration(int n) {
    int current = 0, previous = 1, next = 0;
    for (int i = 0; i < n; i++) {
        cout << current << endl;
        next = current + previous;
        current = previous;
        previous = next;
    }
    return 0;
}

/*
void main() {
    int input;
    cout << "Welcome, Please write a number to get the Fibonacci number" << endl;
    cin >> input;
    cout << Recursion(input);
}
*/

int main() {
    int input;
    cout << "Welcome, Please write a number to iterate to that Fibonacci number." << endl;
    cin >> input;
    cout << iteration(input);
}
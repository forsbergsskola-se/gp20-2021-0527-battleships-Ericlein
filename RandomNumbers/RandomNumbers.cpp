#include <iostream>
using namespace std;

int main(){
    int NumberPool = 10000;
    int RandomNumbers[21] = { 0 };

    for (int i = 0; i <= NumberPool; i++) {
        RandomNumbers[rand() % 21]++;
    }

    for (int i = 1; i <= 20; i++) {
        float Percentage = (float)RandomNumbers[i] * 100 / NumberPool;
        cout << "Number " << i << ": " << RandomNumbers[i] << " (" << Percentage << "%)\n";
    }
}
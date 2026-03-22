#include <iostream>
using namespace std;

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main() {
    int num;
    cin >> num;
    checkEvenOdd(num);
}
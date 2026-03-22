#include <iostream>
using namespace std;

float calculate(float a, float b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

int main() {
    float a, b;
    char op;
    cin >> a >> op >> b;
    cout << calculate(a, b, op);
}
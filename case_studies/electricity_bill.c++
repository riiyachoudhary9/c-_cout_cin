// 1. Electricity Bill System (Using Functions)
//  Assumption (typical slab system)
// 0–100 units → ₹1.5/unit
// 101–200 → ₹2.5/unit
// 201–300 → ₹4/unit
// Above 300 → ₹6/unit

#include <iostream>
using namespace std;

float calculateBill(int units) {
    float bill = 0;

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2.5;
    else if (units <= 300)
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    else
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 6;

    return bill;
}

int main() {
    int units;
    cout << "Enter units consumed: ";
    cin >> units;

    float total = calculateBill(units);

    cout << "Total Electricity Bill: ₹" << total;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T calculateTotalBill(T billAmount, T tipPercent) {
    T tipAmount = billAmount * (tipPercent / 100);
    T totalBill = billAmount + tipAmount;

    cout << "Bill amount: $" << billAmount << endl;
    cout << "Tip (" << tipPercent << "%): $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return totalBill;
}

int main() {
    double bill = 100;
    double tipP = 15;

    double total = calculateTotalBill(bill, tipP);
    cout << "Returned Total Bill: $" << total << endl;

    return 0;
}

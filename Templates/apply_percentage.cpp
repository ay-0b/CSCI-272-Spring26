#include <iostream>
using namespace std;

// one general template
template <typename T>
T applyPercentage(T amount, T percent, bool add) {
    T change = amount * static_cast<T>(percent / 100.0);

    if (add)
        return amount + change; // tip or tax
    else
        return amount - change; // discount
}

int main() {
    double bill = 100.0;

    double totalWithTip = applyPercentage(bill, 15.0, true);
    cout << "Total with Tip: $" << totalWithTip << endl;

    double totalWithTax = applyPercentage(bill, 8.875, true);
    cout << "Total with Tax: $" << totalWithTax << endl;

    double discountedBill = applyPercentage(bill, 10.0, false);
    cout << "After discount: $" << discountedBill << endl;

    int intBill = 50;
    int roundedTotal = applyPercentage(intBill, 10, true);
    cout << "Rounded total: $" << roundedTotal << endl;

    return 0;
}

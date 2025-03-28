#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <iomanip>  // For formatting output

using namespace std;

int main() {
    srand(time(0)); // Seed for randomness

    double stockPrice = 100.0; // Initial stock price
    int days;

    cout << "Enter the number of days to track the stock price: ";
    cin >> days;

    cout << fixed << setprecision(2); // Formatting output to 2 decimal places

    for (int i = 1; i <= days; i++) {
        double change = (rand() % 200 - 100) / 100.0; // Random price change (-1.00 to +1.00)
        stockPrice += change;

        if (stockPrice < 0) stockPrice = 0; // Ensure the price doesn't go negative

        cout << "Day " << i << ": $" << stockPrice << endl;
    }

    cout << "📉 Final Stock Price: $" << stockPrice << endl;
    return 0;
}

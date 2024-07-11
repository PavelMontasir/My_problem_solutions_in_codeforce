#include <iostream>
#include <cmath> // for abs function
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        // Calculate distance sums
        int sum1 = abs(a - b) + abs(a - c);
        int sum2 = abs(b - a) + abs(b - c);
        int sum3 = abs(c - a) + abs(c - b);

        // Find the minimum sum
        int minSum = min(sum1, min(sum2, sum3));

        // Output the minimum sum
        cout << minSum << endl;
    }

    return 0;
}

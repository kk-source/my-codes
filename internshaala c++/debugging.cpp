#include <iostream>
#include <cmath>
using namespace std;

void findSquareRoot(float n) {

    float result = sqrt(n);
    cout << "Result: " << result << endl << endl;
}
// correct code is easy to write.
int main() {

    // Find the square root of 'n' entered by the user.
    cout << "Program starts -->" << endl << endl;

    float n;

    cout << "Enter n: ";
    cin >> n;

    findSquareRoot(n);

    cout << "<-- Program ends" << endl;

    return 0;
}


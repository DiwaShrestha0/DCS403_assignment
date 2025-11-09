#include <iostream>
#include <cmath>   // for sqrt()
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << " and " << root1 << endl;
    }
    else {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are imaginary: "
             << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

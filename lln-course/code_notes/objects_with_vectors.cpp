/*
 * Objects with Vectors
 *
 */

#include <vector>
#include <cstdio>
#include <complex>

int main() {
    std::vector<std::complex<double>> points; // Note: May cause right shift in old compiler

    // Define complex numbers
    points.push_back(std::complex<double>(3.9, 5.7)); // This is the more complex version with strict types: Explicit construction
    points.emplace_back(3.3, 8.0); // In-place construction
    points.emplace_back(9.1, -2.2); // In-place construction
    points.emplace_back(-4.3, 1.6); // In-place construction
    points.emplace_back(7.8, 6.1); // In-place construction

    // Real numbers = Regular numbers
    // Imaginary numbers = Multiples of i, where i = √-1
    printf("First real part: %g \n", points.begin()->real());
    printf("Imaginary part - index 1: %g \n", points[1].imag());
    printf("Next to last real: %g \n", prev(points.end(), 2)->real());
    printf("Last imaginary: %g \n", (points.end() - 1)->imag());

    return 0;
}
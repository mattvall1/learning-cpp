/*
 * Passing values to functions
 */
#include <cstdio>

// Takes args by val (values do not exist after return)
int square(int x) {
    x = x * x;
    return x;
}

// Takes args by addr
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

// NOTE: I don't like that they are called the same thing - but this demos that this can work
// Takes args by ref - gives access to variables outside scope of function
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 9, b;

    b = square(a);
    printf("Square: a = %d b = %d \n", a, b);

    swap(&a, &b); // '&' sends addresses
    printf("Swap: a = %d b = %d \n", a, b);

    swap(a, b);
    printf("Swap: a = %d b = %d \n", a, b);


}
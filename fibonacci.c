#include <stdio.h>
int main() {
    // Define the first two terms of the Fibonacci series.
    int a = 0;
    int b = 1;
    int i;
    // Iterate over the series, calculating each new term.
    for( i = 0; i < 10; i++) {
        // Calculate the next term in the series.
        int c = a + b;
        // Print the current term.
        printf("%d ", c);
        // Update the values of a and b for the next iteration.
        a = b;
        b = c;
    }
    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    
    // Initialize variables a and b to zero
    a = 0;
    b = 0;

    // Read two integers from input
    scanf("%d %d", &a, &b);

    // Compare the two integers and print the greater one
    int result = (a > b) ? a : b;
    printf("%d\n", result);

    return 0;
}

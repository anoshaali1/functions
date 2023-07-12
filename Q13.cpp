#include <stdio.h>
    int isPrime(int n, int divisor) {
    if (n <= 2) {
        if (n == 2) {
            return 1;  // 2 is a prime number
        } else {
            return 0;  // Numbers less than 2 are not prime
        }
    }
    if (n % divisor == 0) {
        return 0;  // Number is divisible, not prime
    } else if (divisor * divisor > n) {
        return 1;  // No divisors found, prime number
    } else {
        return isPrime(n, divisor + 1);  // Recursively check next divisor
    }
}
    int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 1) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int result = isPrime(number, 2);
        if (result == 1) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }
    return 0;
}


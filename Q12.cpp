#include <stdio.h>
    int reverseNumber(int n) {
    static int reversedNum = 0;
    if (n == 0) {
        return reversedNum;
    } else {
        reversedNum = reversedNum * 10 + n % 10;
        return reverseNumber(n / 10);
    }
}
    int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int reversedNumber = reverseNumber(number);
        printf("Reversed number: %d\n", reversedNumber);
    }
    return 0;
}

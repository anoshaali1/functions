#include <stdio.h>
    int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
} 
    int lcm(int a, int b) {
    int gcdResult = gcd(a, b);
    return (a * b) / gcdResult;
}
    int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0 || num2 < 0) {
        printf("Error: Please enter positive integers.\n");
    } else {
        int lcmResult = lcm(num1, num2);
        printf("The LCM of %d and %d is %d\n", num1, num2, lcmResult);
    }
    return 0;
}



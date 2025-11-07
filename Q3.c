#include <stdio.h>
#include <math.h>

int main() {
    int n, num, originalNum, remainder, digits;
    double result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for(num = 1; num <= n; num++) {
        originalNum = num;
        digits = 0;
        result = 0.0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if ((int)result == originalNum)
            printf("%d ", originalNum);
    }

    return 0;
}


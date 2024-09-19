#include <stdio.h>

int isPerfect(int);

int main() {
    int number, result;
    printf("Enter the number to check if it is Perfect: ");
    scanf("%d", &number);
    result = isPerfect(number);
    if (result == 1)
        printf("%d is a Perfect Number\n", number);
    else
        printf("%d is not a Perfect Number\n", number);
    return 0;
}

int isPerfect(int number) {
    int i, sum = 0;
    
    // Calculate the sum of proper divisors
    for(i = 1; i <= number / 2; i++) {
        if (number % i == 0)
            sum += i;
    }
    
    // Check if the sum of proper divisors equals the number
    if (sum == number)
        return 1;
    else
        return 0;
}

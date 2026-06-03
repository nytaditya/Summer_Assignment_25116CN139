#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    if (num == 0) return 1;
    
    int original = num;
    int sum = 0;
    int digits = 0;
    

    while (original != 0) {
        original /= 10;
        digits++;
    }
    
    original = num;
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }
    
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (is_armstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    
    return 0;
}
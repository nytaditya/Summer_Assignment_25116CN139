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

void find_armstrong_numbers(int start, int end) {
    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    find_armstrong_numbers(start, end);
    return 0;
}
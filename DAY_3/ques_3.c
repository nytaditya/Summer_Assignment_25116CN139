#include <stdio.h>

int main() {
    int firstNumber, secondNumber;
    
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    
    //store the original values because our loop will change them
    int a = firstNumber;
    int b = secondNumber;
    
    // loop to calculate GCD
    while (b != 0) {
        int tempRemainder = a % b;
        a = b;
        b = tempRemainder;
    }
    
    int resultGCD = a;
    
    printf("The GCD of %d and %d is %d\n", firstNumber, secondNumber, resultGCD);
    
    return 0;
}
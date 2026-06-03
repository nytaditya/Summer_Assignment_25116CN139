#include <stdio.h>

int main() {
    int firstNumber, secondNumber, largestNumber;
    
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    
    //Find which number is bigger
    if (firstNumber > secondNumber) {
        largestNumber = firstNumber;
    } else {
        largestNumber = secondNumber;
    }
    
    //searching from the largest number upwards
    int currentSearchValue = largestNumber;
    
    //Keep looping until we find a number perfectly divisible by both
    while (currentSearchValue % firstNumber != 0 || currentSearchValue % secondNumber != 0) {
        // If it's not divisible, move to the next number
        currentSearchValue++;
    }
    
    // Once the loop stops, currentSearchValue is our LCM
    printf("The LCM of %d and %d is %d\n", firstNumber, secondNumber, currentSearchValue);
    
    return 0;
}
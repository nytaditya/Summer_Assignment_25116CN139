#include <stdio.h>

int nth_fibonacci(int n) {
    if (n <= 1) return n;
    
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b; 
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci number is: %d\n", n, nth_fibonacci(n));
    return 0;
}
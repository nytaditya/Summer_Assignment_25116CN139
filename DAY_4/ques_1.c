#include <stdio.h>

void fibonacci(int n) {
    if (n <= 0) return;
    
    int a = 0, b = 1;
    printf("%d", a);
    
    if (n == 1) return;
    printf(", %d", b);
    
    for (int i = 2; i < n; i++) {
        int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}
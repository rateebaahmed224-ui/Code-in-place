#include <stdio.h>
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factor pairs of %d are:\n", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {                  
        printf("(%d, %d) ", i,n/i); 
        }
    }

    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            printf("(%d, %d) ", i, n / i);
        }
    }

    return 0;
}

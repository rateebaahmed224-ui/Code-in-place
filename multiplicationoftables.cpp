#include <stdio.h>
int main() {

    int i, j;

    printf("Multiplication Tables (1 to 5):\n\n");

    for (i = 1; i <= 5; i++) {        
   printf("Table of %d:\n", i);
    for (j = 1; j <= 10; j++) {    
    printf("%d x %d = %d\n", i, j, i * j);
    }
    printf("\n");
    }

    return 0;
}

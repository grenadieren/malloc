#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the amount of memory to allocate:");
    int amount;
    scanf("%d\n", amount);
    int *ptr;
    ptr = calloc(amount, sizeof(*ptr));

    *ptr = amount;
    ptr[1] = amount;

    printf("%d\n", *ptr);
}

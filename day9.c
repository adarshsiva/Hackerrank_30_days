#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the factorial function below.
int factorial(int n){
        if(n<=1)
            return 1;
        else
            return n*factorial(n-1);
    }

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    int count = 0;

    while(n>0)
    {
        if(n%2==1)
            count++;
        else
            count = 0;
        if(max<count)
            max = count;
        n=n/2;
    }
    printf("%d", max);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int j;
    double e;
    char t[1000];
    // Declare second integer, double, and String variables.

    scanf("%d%lf", &j, &e);
    getchar();
    scanf("%[^\n]s",t); 

    printf("%d\n%.1lf\n", (i + j), (d + e));
    printf("%s%s", s,t); // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
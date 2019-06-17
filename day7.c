#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a0[n];
    for(i=0;i<n;i++)
     scanf("%d",&a0[i]);

    for(i=n-1;i>=0;i--)
      printf("%d ",a0[i]);
      return 0; 
}
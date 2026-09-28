#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fac = 1;
    for (int i = 1; i <= n;i++){
        fac *= i;
    }
    /* int i = 1;
     while (i <= n)  5
    {
         fac *= i;
         i++;
     }*/
    printf("%d! = %d\n",n,fac);
    return 0;
}
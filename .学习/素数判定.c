#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int t = 1;
    for (int i = 2; i < x;i++){
       if(x%i==0)
       {
           t = 0;
           break;
       }
    }
    if(t == 1)
    {
        printf("%d是个素数.\n",x);
    }
    else
    {
        printf("%d不是素数.\n",x);
    }
    return 0;
}
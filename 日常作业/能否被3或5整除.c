#include<stdio.h>

int main()
{
    int i;
    printf("输入一个整数：");
    scanf("%d", &i);
    if(-1000000<=i&&i<=1000000)
    {
        if(i%3==0&&i%5==0)
            printf("YES\n");
        else
            printf("NO\n");
    }else
        printf("n不在给定范围内\n");
    return 0;
}
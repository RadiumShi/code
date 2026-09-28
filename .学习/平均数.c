#include <stdio.h>
int main()
{
    int num = 0;
    int sum = 0;
    int count = 0;
    printf("请输入一个整数（输入-1结束）：");
    scanf("%d", &num);
    while (num != -1)
    {
        sum += num;
        count++;
        scanf("%d", &num);
    }
    if (count > 0)
    {
        printf("平均数为：%f\n",1.0*sum / count);
    }
    else
    {
        printf("没有输入有效的数字。\n");
    }
    return 0;
}


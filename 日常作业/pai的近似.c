#include <stdio.h>

int main()
{
    unsigned int i, n;
    unsigned int t = 1;
    float f_pi = 2.0, f_i = 1.0;
    double d_pi = 2.0, d_i = 1.0;
    printf("输入计算的迭代次数（0~4294967295）：");
    scanf("%u", &n);
    printf("选择数据类型：1-float,2-double:");
    scanf("%u", &t);
    for (i = 0; i < n; i++)
    {
        switch (t)
        {
        case 1:
            f_pi *= 4.0 * f_i * f_i / (2 * f_i - 1) / (2 * f_i + 1);
            f_i += 1;
            break;
        case 2:
            d_pi *= 4.0 * d_i * d_i / (2 * d_i - 1) / (2 * d_i + 1);
            d_i += 1;
            break;
        }
    }
    switch (t)
    {
    case 1:
        printf("%.8f", f_pi);
    case 2:
        printf("%.16f", d_pi);
    }
    return 0;
}
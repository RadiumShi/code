#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x, y, z, s = 0.0f;
    printf("输入三角形的3个边：");
    scanf("%f %f %f", &x, &y, &z);
    if (x + y <= z || x + z <= y || y + z <= x)
        i = 0;
    else if (x == y && y == z)
        i = 1;
    else if ((x == y) + (y == z) + (x == z) == 1)//等腰三角形 只有一组边相等
        i = 2;
    else if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)//勾股定理
        i = 3;
    else
        i = 4;
    if (i != 0)
    {
        int p = (x + y + z) / 2;
        s = sqrt((float)p * (p - x) * (p - y) * (p - z));
    }
    switch (i)
    {
    case 0:
        printf("Error\n");
        break;
    case 1:
        printf("边长为%.6f,%.6f,%.6f的三角形是等边三角形，其面积为：%.6f\n", x, y, z, s);
        break;
    case 2:
        printf("边长为%.6f,%.6f,%.6f的三角形是等腰三角形，其面积为：%.6f\n", x, y, z, s);
        break;
    case 3:
        printf("边长为%.6f,%.6f,%.6f的三角形是直角三角形，其面积为：%.6f\n", x, y, z, s);
        break;
    case 4:
        printf("边长为%.6f,%.6f,%.6f的三角形是普通三角形，其面积为：%.6f\n", x, y, z, s);
        break;
    }
    return 0;
}
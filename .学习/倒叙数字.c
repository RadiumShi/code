#include <stdio.h>
int main()
{
    int number = 0;
    int res = 0;
    int sh = 0;
    scanf("%d", &number);
    while (number != 0)
    {
        res = number % 10;
        number /= 10;
        sh = sh * 10 + res;
    }
    printf("%d\n", sh);
    return 0;
}

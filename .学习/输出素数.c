#include <stdio.h>
int main()
{
    int cnt = 1;
    int c;
    printf("需要前多少位的素数：");
    scanf("%d",&c);
    for (int x = 2; cnt <= c;x++){
        int t = 1;
        for (int i = 2; i < x; i++){
            if(x%i==0)
            {
                t = 0;
                break;
            }
        }
        if(t == 1)
        {
            printf("%d ",x);
            cnt++;
        }
     
 }
    return 0;
}
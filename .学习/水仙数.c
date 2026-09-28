#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,cnt,sum;
    for (int i = 100; i < 10000000;i++){
        b = i;
        cnt = 0;
        do{
            b /= 10;
            cnt++;
        }while (b != 0);
        a = i;
        sum = 0;
        for (int j = 0; j < cnt;j++){
            sum += pow(a%10,cnt);
            a /= 10;
        }
        if(sum == i){
            printf("%d\n",i);
        }
    }
}
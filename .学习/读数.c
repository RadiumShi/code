#include<stdio.h>
int main()
{
    int tar;
    printf ("请输入一个整数：\n");
    scanf("%d",&tar);
    int a, b,c;
    if(tar<0){
        printf("负");
        tar=-tar;
    }
    int mask=1;
    int t = tar;
    while(t>=10){
        t/=10;
        mask*=10;
    }
    do{
        int temp = tar/mask;
        switch(temp){
            case 0:
            printf("零");
            break;
            case 1:
            printf("一");
            break;
            case 2:
            printf("二");
            break;
            case 3:
            printf("三");
            break;
            case 4:
            printf("四");
            break;
            case 5:
            printf("五");
            break;
            case 6:
            printf("六");
            break;
            case 7:
            printf("七");
            break;
            case 8:
            printf("八");
            break;
            case 9:
            printf("九");
            break;
        }
        tar %= mask;
        mask/=10;
    }while(mask>=0);
    return 0;
}
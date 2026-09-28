#include<stdio.h>
int main(){
    int o, t, th;
    int x;
    printf("请输入需要凑出的金额（单位：元）：");
    scanf("%d", &x);
    for (o = 1; o <= x * 10;o++){
        for (t = 1; t <= x * 10 / 2;t++){
            for (th = 1; th <= x * 10 / 5;th++){
                if(o+t*2+th*5==x*10){
                    printf("需要%d%个一毛和%d个两毛以及%d个五毛可以凑出%d块\n", o, t, th, x);
                    //goto out;
                }
            }
        }
    }
    //out:
    return 0;
}

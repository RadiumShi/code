#include<stdio.h>
int main(){
    int n1,p,q;
    float n2;
    printf("请输入一个整数的百分制成绩：");
    scanf("%d",&n1);
    if(n1<0||n1>100){
        printf("输入成绩不合理，应在0-100范围内\n");
        return 0;
    }
    printf("请输入一个实数的百分制成绩：");
    scanf("%f", &n2);
    switch((n1/5)){
        case 20:
            p = 1;
            break;
        case 19:
            p = 1;
            break;
        case 18:
            p = 2;
            break;
        case 17:
            p = 3;
            break;
        case 16:
            if(n1>=82)
                p = 4;
            else
                p = 5;
            break;
        case 15:
            if(n1>=78)
                p = 5;
            else
                p = 6;
            break;
        case 14:
            if(n1>=72)
                p = 7;
            else
                p = 8;
            break;
        case 13:
            if(n1>=68)
                p = 8;
            else
                p = 9;
            break;
        case 12:
            if(n1=64)
                p = 10;
            else if(n1>=61)
                p = 11;
            else
                p = 12;
            break;
        default:
            p = 13;
            break;
    }
    if(n2<=100&&n2>=95)
        q=1;
    else if(n2<95&&n2>=90)
        q=2;
    else if(n2<90&&n2>=85)
        q = 3;
    else if(n2<85&&n2>=82)
        q = 4;
    else if(n2<82&&n2>=78)
        q = 5;
    else if(n2<78&&n2>=75)
        q = 6;
    else if(n2<75&&n2>=72)
        q = 7;
    else if(n2<72&&n2>=68)
        q = 8;
    else if(n2<68&&n2>=65)
        q = 9;
    else if(n2=64)
        q = 10;
    else if(n2<64&&n2>=61)
        q = 11;
    else if(n2=60)
        q = 12;
    else
        q = 13;
    switch(p){
        case 1:
            printf("百分制成绩%d对应五分制A+，GPA=4.3\n", n1);
            break;
        case 2:
            printf("百分制成绩%d对应五分制A，GPA=4.0\n", n1);
            break;
        case 3:
            printf("百分制成绩%d对应五分制A-，GPA=3.7\n", n1);
            break;
        case 4:
            printf("百分制成绩%d对应五分制B+，GPA=3.3\n", n1);
            break;
        case 5:
            printf("百分制成绩%d对应五分制B，GPA=3.0\n", n1);
            break;
        case 6:
            printf("百分制成绩%d对应五分制B-，GPA=2.7\n", n1);
            break;
        case 7:
            printf("百分制成绩%d对应五分制C+，GPA=2.3\n", n1);
            break;
        case 8:
            printf("百分制成绩%d对应五分制C，GPA=2.0\n", n1);
            break;
        case 9:
            printf("百分制成绩%d对应五分制C-，GPA=1.7\n", n1);
            break;
        case 10:
            printf("百分制成绩%d对应五分制D+，GPA=1.5\n", n1);
            break;
        case 11:
            printf("百分制成绩%d对应五分制D，GPA=1.3\n", n1);
            break;
        case 12:
            printf("百分制成绩%d对应五分制D-，GPA=1.0\n", n1);
            break;
        default:
            printf("百分制成绩%d对应五分制F，GPA=0\n", n1);
    }
    switch(q){
        case 1:
            printf("百分制成绩%.6f对应五分制A+，GPA=4.3\n", n2);
            break;
        case 2:
            printf("百分制成绩%.6f对应五分制A，GPA=4.0\n", n2);
            break;
        case 3:
            printf("百分制成绩%.6f对应五分制A-，GPA=3.7\n", n2);
            break;
        case 4:
            printf("百分制成绩%.6f对应五分制B+，GPA=3.3\n", n2);
            break;
        case 5:
            printf("百分制成绩%.6f对应五分制B，GPA=3.0\n", n2);
            break;
        case 6:
            printf("百分制成绩%.6f对应五分制B-，GPA=2.7\n", n2);
            break;
        case 7:
            printf("百分制成绩%.6f对应五分制C+，GPA=2.3\n", n2);
            break;
        case 8:
            printf("百分制成绩%.6f对应五分制C，GPA=2.0\n", n2);
            break;
        case 9:
            printf("百分制成绩%.6f对应五分制C-，GPA=1.7\n", n2);
            break;
        case 10:
            printf("百分制成绩%.6f对应五分制D+，GPA=1.5\n", n2);
            break;
        case 11:
            printf("百分制成绩%.6f对应五分制D，GPA=1.3\n", n2);
            break;
        case 12:
            printf("百分制成绩%.6f对应五分制D-，GPA=1.0\n", n2);
            break;
        default:
            printf("百分制成绩%.6f对应五分制F，GPA=0\n", n2);
    }
}
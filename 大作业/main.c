
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("data.csv", "r");

    if (fp == NULL)
    {
        printf("文件打开失败！\n");
        return 1;
    }

    char line[200];

    // 读取并跳过表头
    if (fgets(line, sizeof(line), fp) == NULL)
    {
        printf("文件为空！\n");
        fclose(fp);
        return 1;
    }

    // 逐行读取数据
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        // 删除行末换行符（如果存在）
        line[strcspn(line, "\r\n")] = '\0';

        char *comma = strchr(line, ',');

        if (comma == NULL)
        {
            printf("跳过格式错误的数据：%s\n", line);
            continue;
        }

        *comma = '\0';

        char *name = line;
        char *scoreText = comma + 1;

        int score = atoi(scoreText);

        printf("姓名：%s，分数：%d\n", name, score);
    }

    fclose(fp);

    return 0;
}
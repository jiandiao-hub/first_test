#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;
    // 打开文件用于写入。如果文件不存在，则会自动创建。
    fp = fopen("test.txt", "w");

    // 检查文件是否成功打开
    if (fp == NULL) {
        printf("无法创建文件！\n");
        return 1;
    }
    // 写入文件的字符串
    const char *content = "这是准备要写入文件的指定内容。";

    // 写入内容到文件
    fprintf(fp, "%s", content);

    // 文件操作成功的信息输出
    printf("文件已创建，并写入了指定内容。\n");
    fclose(fp);
    return 0;
}
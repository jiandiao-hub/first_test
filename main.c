#include <stdio.h>
#include <time.h>
#include "add.h"
#include <stdlib.h>

int main(){

    srand((unsigned int)time(NULL));
    // 定义随机数范围
    int min = 1;
    int max = 20;
    // 生成两个 [min, max] 范围内的随机整数
    int num1 = rand() % (max - min + 1) + min;
    int num2 = rand() % (max - min + 1) + min;
    printf("num1 = %d  num2 = %d\n", num1,num2);

    int result = add(num1,num2);
    printf("num1 + num2 = %d\n", result);
    return 0;
}
#include <stdio.h>
#include <time.h>
#include "add.h"
#include <stdlib.h>

int main(){

    srand((unsigned int)time(NULL));
    // �����������Χ
    int min = 1;
    int max = 20;
    // �������� [min, max] ��Χ�ڵ��������
    int num1 = rand() % (max - min + 1) + min;
    int num2 = rand() % (max - min + 1) + min;
    printf("num1 = %d  num2 = %d\n", num1,num2);

    int result = add(num1,num2);
    printf("num1 + num2 = %d\n", result);
    return 0;
}
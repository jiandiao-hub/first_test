#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp;

    // ���ļ�����д�롣����ļ������ڣ�����Զ�������
    fp = fopen("test.txt", "w");

    // ����ļ��Ƿ�ɹ���
    if (fp == NULL) {
        printf("�޷������ļ���\n");
        return 1;
    }

    // �ļ������ɹ�����Ϣ���
    printf("�ļ��Ѵ�����\n");

    // �ر��ļ�
    fclose(fp);

    return 0;
}
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
    // д���ļ����ַ���
    const char *content = "����׼��Ҫд���ļ���ָ�����ݡ�";

    // д�����ݵ��ļ�
    fprintf(fp, "%s", content);

    // �ļ������ɹ�����Ϣ���
    printf("�ļ��Ѵ�������д����ָ�����ݡ�\n");
    fclose(fp);
    return 0;
}
//
// Created by james on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;//ָ���ƶ�
    }
    return count;
}


int main() {

    char array[] = {'s', 's', 's', 's', 's', '\0'};
    printf("���鳤��Ϊ%d\n", mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("�޸ĺ���ַ���Ϊ%s\n",array);



    char *string = "fadfa";//�ַ������� �����޸�?
    string = "fadf";//string ָ��ָ���µ�����
    printf("�޸ĺ��stringΪ%s\n", string);
    const int sum = 100;
    printf("�޸�ǰ��sum =%d\n", sum);
    int *p = &sum;//c������bug
    *p = 200;
    printf("�޸ĺ��sum =%d\n", sum);

    printf("�ַ����Ƚ� cmp = %d\n", cmp(array, string));

    return 0;

}


int cmp(char *str, char *str2) {
    return strcmp(str, str2); //aaa hello
}
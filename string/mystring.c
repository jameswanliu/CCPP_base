//
// Created by james on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}


int main() {

    char array[] = {'s', 's', 's', '\0'};
    printf("���鳤��Ϊ%d\n",mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("�޸ĺ���ַ���Ϊ%s\n",array);



    char* string = "shish";//�ַ������� �����޸�?
    string ="hahaha";
    printf("�޸ĺ��stringΪ%s\n",string);
    const int sum = 100;
    printf("�޸�ǰ��sum =%d\n",sum);
    int* p = &sum;
    *p = 200;
    printf("�޸ĺ��sum =%d\n",sum);
    return 0;

}
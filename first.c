//
// Created by james on 2019/11/17.
//

#include <stdlib.h>
#include <stdio.h>


/**
 * const char *p ��char const *p �� char * const p������
 *
 * const char *p �� char const *p��ͬ ����ָ�볣�� ��ָ���ֵ���ɸı�
 *
 *  char * const p ����ָ��  �䱣��ĵ�ַ�����Ըı�
 * @return
 */
int main() {


    int *a, *b;


    a = (int *) malloc(sizeof(int));

    b = (int *) malloc(sizeof(int));

    *a = 100;

    *b = 200;


    printf("a�ĵ�ַ %p,%p,%d\n", &a, a, *a);//&a ȡ���ڴ��ַ aջ�еĵ�ַ *a ȡֵ

    printf("b�ĵ�ַ %p,%p,%d\n", &b, b, *b);


    int c[3] = {1, 2, 3};
//&c������������׵�ַ��c��������Ԫ�ص��׵�ַ����ֵ��ͬ���������岻ͬ
    printf("c�ĵ�ַ��%p,%p,%d,%d,%d\n", &c, c, c[0], c[1], c[2]);


}


//
// Created by kevin on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>


/**
 * ָ����ǿ
 *
 * ����ָ�� ���һ��ָ��ָ���������һ��ָ�룬���Ǿͳ���Ϊ����ָ�룬����ָ��ָ���ָ��
 *
 * @return
 */

int main() {

    int i = 200;

    int* p = &i;//һ��ָ��p ��ָ��i��ָ����� ������Ǳ���i�ĵ�ַ

    int** d = &p;//����ָ��d ָ��p��ָ����� ������� i��ַ�ĵ�ַ


    printf("d�ĵ�ַ��%p\n",*d);
    printf("p��������%p\n",p);
    printf("d��������%d\n",**d);
    printf("d��������%p\n",d);


    int array[] = {1, 2, 3, 4};

    int *array_p = array;//������ָ���


    //������ָ��

    for (int i = 0; i < 4; i++) {
//        printf("array_p[i] =%d\n",*array_p++); //���������ֵ��һ�ַ�ʽ
        printf("array_p[i] =%d\n", array_p[i]);//�ڶ��ַ�ʽ
    }


}


//
// Created by kevin on 2019/11/19.
//
#include <stdlib.h>
#include <stdio.h>


/**
 *
 * ��̬�ڴ����
 *
 *
 * malloc �����ڴ�ռ�
 *
 *
 * realloc ����֮ǰ��ָ�����������ڴ�
 *
 *
 * alloc �������ջ�ڴ�ռ� ����free�ͷ�
 *
 *
 *
 * calloc
 */

void main() {

//    int len;
//    printf("�������״η����ڴ��С��");
//    scanf("%d", &len);
//    // ��̬�����ڴ�,�ڴ�ռ���������
//    int *p = (int *) malloc(len * sizeof(int));
//    for (int i = 0; i < len; i++) {
//        p[i] = rand() % 100;
//        printf("p[i]=%d (p[i+i])=%d\n", p[i], *(p + i));
//    }
//
//    printf("���·����ڴ��С ����Ļ�������С:\n");
//
//    int add = 5;
//
//
////    scanf("������ڴ��СΪ:%d", &add);
//
//    int *p2 = (int *) realloc(p, sizeof(int) * (add + len));
//
//
//    int j = len;
//
//    for (; j < add + len; j++) {
//        p2[j] = rand() % 100;
//    }
//
//
//
//    // ��ӡ
//    j = 0;
//    for (; j < len + add; j++) {
//        printf("array[%d] = %d , %#x\n", j, p2[j], &p2[j]);
//    }
//
//    if (p2 != NULL) {
//        free(p2);
//        p2 = NULL;
//    }




    int len;
    int *p;
    printf ("Amount of numbers to be entered: ");
    scanf ("%d",&len);

    p = calloc(len, sizeof(int));

    if (p == NULL) {
        exit(1);
    }


    for (int i = 0; i < len; i++) {
        printf("�ڿ���̨������ֵ����ָ��p��%d\n", i);
        scanf("%d", &p[i]);
    }
    printf("�����������Ϊ\n");
    for (int n = 0; n < len; n++) printf("%d ", p[n]);

    if (p != NULL) {
        free(p);
        p = NULL;
    }


}

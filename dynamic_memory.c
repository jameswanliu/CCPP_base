//
// Created by kevin on 2019/11/19.
//
#include <stdlib.h>
#include <stdio.h>


/**
 *
 * 动态内存管理
 *
 *
 * malloc 申请内存空间
 *
 *
 * realloc 根据之前的指针重新申请内存
 *
 *
 * alloc 申请的是栈内存空间 无需free释放
 *
 *
 *
 * calloc
 */

void main() {

//    int len;
//    printf("请输入首次分配内存大小：");
//    scanf("%d", &len);
//    // 动态分配内存,内存空间是连续的
//    int *p = (int *) malloc(len * sizeof(int));
//    for (int i = 0; i < len; i++) {
//        p[i] = rand() % 100;
//        printf("p[i]=%d (p[i+i])=%d\n", p[i], *(p + i));
//    }
//
//    printf("重新分配内存大小 在屏幕上输入大小:\n");
//
//    int add = 5;
//
//
////    scanf("输入的内存大小为:%d", &add);
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
//    // 打印
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
        printf("在控制台中输入值存入指针p中%d\n", i);
        scanf("%d", &p[i]);
    }
    printf("你输入的数字为\n");
    for (int n = 0; n < len; n++) printf("%d ", p[n]);

    if (p != NULL) {
        free(p);
        p = NULL;
    }


}

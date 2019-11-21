//
// Created by james on 2019/11/17.
//

#include <stdlib.h>
#include <stdio.h>


/**
 * const char *p ，char const *p 和 char * const p的区别
 *
 * const char *p 与 char const *p相同 即是指针常量 其指向的值不可改变
 *
 *  char * const p 常量指针  其保存的地址不可以改变
 * @return
 */
int main() {


    int *a, *b;


    a = (int *) malloc(sizeof(int));

    b = (int *) malloc(sizeof(int));

    *a = 100;

    *b = 200;


    printf("a的地址 %p,%p,%d\n", &a, a, *a);//&a 取堆内存地址 a栈中的地址 *a 取值

    printf("b的地址 %p,%p,%d\n", &b, b, *b);


    int c[3] = {1, 2, 3};
//&c是整个数组的首地址，c是数组首元素的首地址，其值相同，但是意义不同
    printf("c的地址是%p,%p,%d,%d,%d\n", &c, c, c[0], c[1], c[2]);


}


//
// Created by kevin on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>


/**
 * 指针增强
 *
 * 二级指针 如果一个指针指向的是另外一个指针，我们就称它为二级指针，或者指向指针的指针
 *
 * @return
 */

int main() {

    int i = 200;

    int* p = &i;//一级指针p 是指向i的指针变量 保存的是变量i的地址

    int** d = &p;//二级指针d 指向p的指针变量 保存的是 i地址的地址


    printf("d的地址是%p\n",*d);
    printf("p的数据是%p\n",p);
    printf("d的内容是%d\n",**d);
    printf("d的内容是%p\n",d);


    int array[] = {1, 2, 3, 4};

    int *array_p = array;//数组与指针绑定


    //数组与指针

    for (int i = 0; i < 4; i++) {
//        printf("array_p[i] =%d\n",*array_p++); //或者数组的值第一种方式
        printf("array_p[i] =%d\n", array_p[i]);//第二种方式
    }


}


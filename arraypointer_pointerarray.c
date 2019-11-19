//
// Created by kevin on 2019/11/19.
//


#include <stdlib.h>
#include <stdio.h>


/**
 * 数组指针 （int (*p)[n] 一个指向整型数组的指针变量）
 *
 *
 * 指针数组 (int *p[n] 一个保存n个整型指针的数组)
 * []优先级高，先与p结合成为一个数组，再由int*说明这是一个整型指针数组，它有n个指针类型的数组元素。这里执行p+1时，则p指向下一个数组元素
 * p=a；因为p是个不可知的表示，只存在p[0]、p[1]、p[2]...p[n-1],而且它们分别是指针变量可以用来存放变量地址。
 * 但可以这样 *p=a; 这里*p表示指针数组第一个元素的值，a的首地址的值。
 *
 *
 * @return
 */

int main() {


    int array[2][3] = {{1, 2, 3},
                       {4, 5, 6}};


    int (*p)[3] = array;

    for (int i = 0; i < 6; i++) {
        printf("*p = %x\n", p++);
    }



    //求数组中的最大值

    int *c;
    int max;

    /**
     * 将array的首地址赋给 c
     *
     *
     * 将c的首元素赋值给max
     *
     * c的长度不能超过array
     */
    for (c = array[0], max = *c; c < array[0] + 6; c++) {
        if (*c > max) {
            max = *c;
        }
    }


    printf("max =%d\n", max);

}

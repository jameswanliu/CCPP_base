//
// Created by james on 2019/12/1.
//


#include <stdlib.h>
#include <stdio.h>


int main() {


    int a[] = {1, 2, 3, 4, 5};


    int *p = (int *) (&a + 1);//注意a 是 数组 &a 表示整个数组的地址 &a+1 表示 数组的下一个地址

    printf("%d ===--==%d", *(a + 1), *(p - 1));//输出 2和 5





    int b = 10, c = 257;


    int const d = 22;

    const int *e = &a;
    int *const f = &b;

//    int const* g const = &a;


    // *d = 32 报错 d是int 常量  不是指针 不能通过 * 取值

    e = &b;

 //   *e = 43; 报错 e 是 常量指针 其值不能改变

// f = 43; 报错 f 是 指针常量 其地址不能改变

// f = &a;报错 f 是 指针常量 其地址不能改变





    return 0;
}
//
// Created by kevin on 2019/11/19.
//

#include <stdio.h>


void change(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main() {

    int i = 200;


//    printf("i的数值为 %d\n",i);

    printf("i的数值为 %d\n", i);
    printf("i的地址为 %p\n", &i);//%p打印地址
    printf("取i变量的内存地址里面的数据 %d\n", *(&i));


    //定义一个int 类型的指针 将 i的地址赋给该指针

    int *b = &i;

    printf("int 类型的指针的值为%d\n", *b);
    printf("int 类型的指针的地址为%p\n", &b);
    printf("int 类型的指针存储的内容为%p\n", b);//b 是通过&i 赋予的 所以 b的值与 &i相同

    *b = 1000;//修改i的值
    printf("i的值为%d\n", i);


    int c = 100;
    int f = 200;

    change(&c, &f);

    printf("c的值为%d\n", c);

    printf("f的值为%d\n", f);
//数值传递和引用传递 面试题 change()

    return 0;


}
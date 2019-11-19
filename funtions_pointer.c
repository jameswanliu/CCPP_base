//
// Created by kevin on 2019/11/19.
//



/**
 * 函数指针
 */


//  函数指针原型 int (*callback)(int x,int y) 或者 int (*callback)(int,int)

#include <stdio.h>
#include <stdlib.h>


typedef void (*PtrApint)();

typedef void (*PtrBpint)(int);

//1。自己定义一个普通的函数，
void FunA() {
    printf("call FunA\n");
}

void FunB(int n) {
    printf("call FunB. n is : %d\n", n);
}


// 函数指针作为函数参数使用
void usePtrFunA(PtrApint p) {
    p();
}

void usePtrFunB(PtrBpint p, int n) {
    p(n);
}

//定义普通函数
int add(int a, int b) {
    return a + b;
}

/**
 * 被调用的函数 将函数的指针 赋值给callback 然后通过 *callback 调用
 *
 * 将函数的参数直接声明称 函数指针原型
 * @param callback
 * @param a
 * @param b
 * @return
 */
int ADD(int (*callback)(int, int), int a, int b) {
    return (*callback)(a, b);
}

int main() {
    printf("ADD %d\n", ADD(add, 10, 20));//将函数add 的首地址 赋给 callback

    PtrApint prtApint = FunA;

    PtrBpint ptrBpint = FunB;

    usePtrFunA(prtApint);

    usePtrFunB(ptrBpint, 10000);


    return 0;
}


//
// Created by kevin on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>

void (*funP)(int);   //声明也可写成void(*funP)(int x)，但习惯上一般不这样。
void (*funA)(int);
void myFun(int x);    //声明也可写成：void myFun( int );

int main()
{
    //一般的函数调用
    myFun(100);

    //myFun与funP的类型关系类似于int 与int *的关系。
    funP=&myFun;  //将myFun函数的地址赋给funP变量
    (*funP)(200);  //通过函数指针变量来调用函数

    //myFun与funA的类型关系类似于int 与int 的关系。
    funA=myFun;
    funA(300);

    //三个貌似错乱的调用
    funP(400);
    (*funA)(600);
    (*myFun)(1000);

    return 0;
}

void myFun(int x)
{
    printf("myFun: %d\n",x);
}
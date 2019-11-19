//
// Created by kevin on 2019/11/19.
//

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
//两大规则
/**
 * 1.每个结构体成员的起始地址为该成员大小的整数倍 比如int 类型为 0，4，8
 * 2.结构体的大小为其中最大成员大小的整数倍
 */



#pragma pack(1)//指定内存对齐
struct A {
    char a;//1
    int b;//3 +4=7 规则1
    short c;//2+2  规则2
};

#pragma pack(1)//指定内存对齐
struct B {
    char a;//1
    short b;//1+2
    int c;//4
};


int main() {

    printf("sizeof(struct A)=%d sizeof(struct B)=%d\n", sizeof(
            struct A), sizeof(struct B));

    printf("FILE %s\n", __FILE__);//打印当前的文件所在目录
    printf("DATE %s\n", __DATE__);//打印当前系统日期
    printf("TIME %s\n", __TIME__);//打印当前系统时间（时分秒）
    printf("LINE %d\n", __LINE__);//打印当前的代码的行数
    printf("ANSI %d\n",__STDC__);//当要求程序严格遵循ANSIC标准时该标识符被赋值为1。


    return 0;
}




#include <stdlib.h>
#include <stdio.h>

int main() {


    int a, b;

    a = 100;
    b = 200;

    int sum = a + b;


    printf("a 等于%d, b等于%d,sum等于%d\n", a, b, sum);


    printf("int 类型占用%d 字节\n", sizeof(int));
    printf("float 类型占用%d 字节\n", sizeof(float));
    printf("double 类型占用%d 字节\n", sizeof(double));
    printf("short 类型占用%d 字节\n", sizeof(short));
    printf("long 类型占用%d 字节\n", sizeof(long));


    printf("char 类型占用%d 字节\n", sizeof(char));
}
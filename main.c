#include <stdlib.h>
#include <stdio.h>

int main() {


    int a, b;

    a = 100;
    b = 200;

    int sum = a + b;


    printf("a ����%d, b����%d,sum����%d\n", a, b, sum);


    printf("int ����ռ��%d �ֽ�\n", sizeof(int));
    printf("float ����ռ��%d �ֽ�\n", sizeof(float));
    printf("double ����ռ��%d �ֽ�\n", sizeof(double));
    printf("short ����ռ��%d �ֽ�\n", sizeof(short));
    printf("long ����ռ��%d �ֽ�\n", sizeof(long));


    printf("char ����ռ��%d �ֽ�\n", sizeof(char));
}
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


//    printf("i����ֵΪ %d\n",i);

    printf("i����ֵΪ %d\n", i);
    printf("i�ĵ�ַΪ %p\n", &i);//%p��ӡ��ַ
    printf("ȡi�������ڴ��ַ��������� %d\n", *(&i));


    //����һ��int ���͵�ָ�� �� i�ĵ�ַ������ָ��

    int *b = &i;

    printf("int ���͵�ָ���ֵΪ%d\n", *b);
    printf("int ���͵�ָ��ĵ�ַΪ%p\n", &b);
    printf("int ���͵�ָ��洢������Ϊ%p\n", b);//b ��ͨ��&i ����� ���� b��ֵ�� &i��ͬ

    *b = 1000;//�޸�i��ֵ
    printf("i��ֵΪ%d\n", i);


    int c = 100;
    int f = 200;

    change(&c, &f);

    printf("c��ֵΪ%d\n", c);

    printf("f��ֵΪ%d\n", f);
//��ֵ���ݺ����ô��� ������ change()

    return 0;


}
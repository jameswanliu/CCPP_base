//
// Created by james on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;//指针移动
    }
    return count;
}


int main() {

    char array[] = {'s', 's', 's', 's', 's', '\0'};
    printf("数组长度为%d\n", mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("修改后的字符串为%s\n",array);



    char *string = "fadfa";//字符串常量 不可修改?
    string = "fadf";//string 指针指向新的内容
    printf("修改后的string为%s\n", string);
    const int sum = 100;
    printf("修改前的sum =%d\n", sum);
    int *p = &sum;//c编译器bug
    *p = 200;
    printf("修改后的sum =%d\n", sum);

    printf("字符串比较 cmp = %d\n", cmp(array, string));

    return 0;

}


int cmp(char *str, char *str2) {
    return strcmp(str, str2); //aaa hello
}
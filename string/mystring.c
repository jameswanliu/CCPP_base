//
// Created by james on 2019/11/19.
//

#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}


int main() {

    char array[] = {'s', 's', 's', '\0'};
    printf("数组长度为%d\n",mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("修改后的字符串为%s\n",array);



    char* string = "shish";//字符串常量 不可修改?
    string ="hahaha";
    printf("修改后的string为%s\n",string);
    const int sum = 100;
    printf("修改前的sum =%d\n",sum);
    int* p = &sum;
    *p = 200;
    printf("修改后的sum =%d\n",sum);
    return 0;

}
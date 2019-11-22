//
// Created by james on 2019/11/19.
//
/**
 * 自己实现string 相关函数
 */


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

int cmp(char *str, char *str2) {
    return strcmp(str, str2); //aaa hello
}

/**
 * 外部传入的是字符串数组 将字符串首地址赋给了dest
 * 然后 将dect 的地址赋值给了ret ，当*dest++=*str++
 * 时 其实是将str的值放进了ret指针指向的内存中 起到了拼接的作用
 * @param dect
 * @param str
 * @return
 */
char *mystrcat(char *dect, const char *str) {
    char *ret = dect;
    while (*dect) {
        dect++;
        printf("dest  = %s\n", dect);
    }

    while (*dect++ = *str++) {
        printf("dest s = %s\n", dect);

        printf("ret s = %s\n", ret);
    }

    return ret;
}


/**
 * 判断str 是否 是 desc 的 子串
 * @param desc
 * @param str
 * @return
 */
char *mystrstr(const char *desc, const char *str) {


    char *ptr = desc;


    /**
     * 定义两个指针变量
     * 用于移动指针时判断 两个char 是否相等
     */
    char *p1 = NULL;
    char *p2 = NULL;


    while (*desc) {//首先循环遍历desc 指针
        p1 = ptr;
        p2 = str;

        while (*p1++ == *p2++) {//当p1和p2指针一起移动时 若字符相等 则循环继续移动指针
            p1++;
            p2++;
            if (*p2 == '\0') {
                return ptr;
            }//当p2的字符是结束符时停止循环
        }
        ptr++;//如果比较两个字符不相同则会移动 ptr 指针  所以最后若是相同则返回ptr 否则返回NULL
    }

    return NULL;

}


int main() {

    char array[] = {'s', 's', 's', '\0'};
    printf("数组长度为%d\n", mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("修改后的字符串为%s\n",array);



    volatile char *string = "shish";//字符串常量 不可修改?
    string = "hahaha";
    printf("修改后的string为%s\n", string);
    const int sum = 100;
    printf("修改前的sum =%d\n", sum);
    int *p = &sum;
    *p = 200;
    printf("修改后的sum =%d\n", sum);


    char str1[20] = "hello";

    char *str2 = "world";

    char *news = mystrcat(str1, str2);

    printf("news=%s\n", news);

    const char *p1 = "abbdfadfa";
    const char *p2 = "abb";


    printf("mystrstr =%s\n", mystrstr(p1, p2));





    char str_array[20] = {'\0'};

    // 参数：
    //         fgets 函数
    //         s: 字符型指针，指向存储读入数据的缓冲区的地址。
    //
    //         n: 从流中读入n-1个字符
    //
    //         stream ： 指向读取的流。
    printf("fgets= %s\n",fgets(str_array, sizeof(str_array),stdin));
    string = "fadf";//string 指针指向新的内容
    printf("修改后的string为%s\n", string);
    printf("修改前的sum =%d\n", sum);
    *p = 200;
    printf("修改后的sum =%d\n", sum);

    printf("字符串比较 cmp = %d\n", cmp(array, string));

    return 0;

}



//
// Created by james on 2019/11/19.
//
/**
 * �Լ�ʵ��string ��غ���
 */


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


/**
 * �ⲿ��������ַ������� ���ַ����׵�ַ������dest
 * Ȼ�� ��dect �ĵ�ַ��ֵ����ret ��*dest++=*str++
 * ʱ ��ʵ�ǽ�str��ֵ�Ž���retָ��ָ��������� ����ƴ�ӵ�����
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
 * �ж�str �Ƿ� �� desc �� �Ӵ�
 * @param desc
 * @param str
 * @return
 */
char *mystrstr(const char *desc, const char *str) {


    char *ptr = desc;


    /**
     * ��������ָ�����
     * �����ƶ�ָ��ʱ�ж� ����char �Ƿ����
     */
    char *p1 = NULL;
    char *p2 = NULL;


    while (*desc) {//����ѭ������desc ָ��
        p1 = ptr;
        p2 = str;

        while (*p1++ == *p2++) {//��p1��p2ָ��һ���ƶ�ʱ ���ַ���� ��ѭ�������ƶ�ָ��
            p1++;
            p2++;
            if (*p2 == '\0') {
                return ptr;
            }//��p2���ַ��ǽ�����ʱֹͣѭ��
        }
        ptr++;//����Ƚ������ַ�����ͬ����ƶ� ptr ָ��  �������������ͬ�򷵻�ptr ���򷵻�NULL
    }

    return NULL;

}


int main() {

    char array[] = {'s', 's', 's', '\0'};
    printf("���鳤��Ϊ%d\n", mystrlen(array));

//
//    array[1] = 'b';
//
//    printf("�޸ĺ���ַ���Ϊ%s\n",array);



    char *string = "shish";//�ַ������� �����޸�?
    string = "hahaha";
    printf("�޸ĺ��stringΪ%s\n", string);
    const int sum = 100;
    printf("�޸�ǰ��sum =%d\n", sum);
    int *p = &sum;
    *p = 200;
    printf("�޸ĺ��sum =%d\n", sum);


    char str1[20] = "hello";

    char *str2 = "world";

    char *news = mystrcat(str1, str2);

    printf("news=%s\n", news);

    const char *p1 = "abbdfadfa";
    const char *p2 = "abb";


    printf("mystrstr =%s\n", mystrstr(p1, p2));





    char str_array[20] = {'\0'};

    // ������
    //         fgets ����
    //         s: �ַ���ָ�룬ָ��洢�������ݵĻ������ĵ�ַ��
    //
    //         n: �����ж���n-1���ַ�
    //
    //         stream �� ָ���ȡ������
    printf("fgets= %s\n",fgets(str_array, sizeof(str_array),stdin));


    return 0;

}


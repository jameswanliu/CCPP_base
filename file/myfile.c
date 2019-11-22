//
// Created by kevin on 2019/11/22.
//


/**
 * 文件复制
 *
 * 文件加密
 *
 *
 * @return
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFSIZE 1024


bool copyFile(const char *srcFile, const char *destFile) {
    if (srcFile == NULL || destFile == NULL) {
        printf("srcFile destFile can not be NULL");
        return false;
    }
    FILE *src;
    FILE *dest;
    src = fopen(srcFile, "rb");
    dest = fopen(destFile, "wb");
    if (src == NULL || dest == NULL) {
        printf("src dest open is fail");
        return false;
    }
    char *buff = alloca(BUFFSIZE);
    while (fread(buff, sizeof(char), 1, src) != 0) {
        fwrite(buff, sizeof(char), 1, dest);
    }
    fclose(src);
    fclose(dest);
    return true;
}


/**
 * //r只读文件，
 * r+ 允许读写文件
 * a 允许写入文件追加模式,
 * a+ 允许读写文件 追加模式 ，
 * w 允许写入文件 会将之前的文本长度截取为0，
 * w+ 允许读写文件 会将之前的额文本截取掉 重新写入
 */
void testBaseApi() {
    const char *src = "../file/test.txt";
    FILE *file = fopen(src,
                       "a");
    char out[] = {"helloworld"};
    int ch;
    if (file != NULL) {
        while ((ch = fgetc(file)) != EOF) {//不断从文件中读取字符知道文件的末尾
            printf("ch = %d\n", ch);
        }
        for (int i = 0; i < 10; i++) {
            printf("fputc = %d\n", fputc(out[i], file));
        }
    }

    fclose(file);

}


int getfileLineNum(FILE *file) {
    int num = 0;
    if (file == NULL) {
        printf("file open fail");
        return -1;
    }
    char buff[1024];

    while (fgets(buff, 1024, file) != NULL) {
        printf("buff=%s\n", buff);
        num++;
    }
    fseek(file, 0, SEEK_SET);
    return num;
}


int main() {
    printf("copy success = %d\n", copyFile("../file/src.txt", "../file/desc.txt"));
    FILE *file = fopen("../file/test.txt", "r");
    printf("file num = %d\n", getfileLineNum(file));
    testBaseApi();
}
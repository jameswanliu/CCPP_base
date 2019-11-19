//
// Created by kevin on 2019/11/19.
//

#include "memory_leak.h"

#define SIZE 256

typedef struct {
    void *pointer;
    int size;
    const char *file;
    int line;
} Mitem;

static Mitem g_record[SIZE];

void* mallocEx(size_t n, const char *file, const line) {
    void *ret = malloc(n);
    for (int i = 0; i < SIZE; i++) {
        if (ret != NULL) {
            g_record[i].pointer = ret;
            g_record[i].file = file;
            g_record[i].line = line;
            g_record[i].size = n;
        }
    }
    return ret;
}


void freeEx(void *p) {

    if (p != NULL) {
        for (int i = 0; i < SIZE; i++) {
            if (g_record[i].pointer == p) {
                g_record[i].pointer = NULL;
                g_record[i].size = 0;
                g_record[i].line = 0;
                g_record[i].file = NULL;
                free(p);
                break;
            }

        }
    }


}

void PRINT_LEAK_INFO()
{
    int i = 0;

    printf("Potential Memory Leak Info:\n");

    /* 遍历全局数组，打印未释放的空间记录 */
    for(i=0; i<SIZE; i++)
    {
        if( g_record[i].pointer != NULL )
        {
            printf("Address: %p, size:%d, Location: %s:%d\n", g_record[i].pointer, g_record[i].size, g_record[i].file, g_record[i].line);
        }
    }
}
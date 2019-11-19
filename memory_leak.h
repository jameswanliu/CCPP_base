//
// Created by kevin on 2019/11/19.
//



#ifndef CCPP_BASE_MEMORY_LEAK_H
#define CCPP_BASE_MEMORY_LEAK_H


#include <mm_malloc.h>
#include <stdlib.h>
#include <stdio.h>

//预编译指令 define 标识符 常量

#define MALLOC(n) mallocEx(n,__FILE__,__LINE__)
#define FREE(p) freeEx(p)

void *mallocEx(size_t n, const char *file, const line);

void freeEx(void *p);

void PRINT_LEAK_INFO();


#endif// CCPP_BASE_MEMORY_LEAK_H

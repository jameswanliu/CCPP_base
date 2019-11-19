//
// Created by kevin on 2019/11/19.
//

#include "memory_leak.h"


void f() {
    MALLOC(100);
}

int main() {


    int *p1 = (int *) MALLOC(sizeof(int) * 3);
    int *p2 = (int *) MALLOC(sizeof(int) * 3);

    f();


    free(p1);


    PRINT_LEAK_INFO();


    return 0;

}
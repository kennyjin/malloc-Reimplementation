/* allocation is too big to fit in available space */
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "mem.h"

int main() {
    assert(Mem_Init(4096) == 0);
    assert(Mem_Alloc(4095) == NULL);
    // Mem_Init(4096);
    // Mem_Dump();
    // void *ptr = Mem_Alloc(4080);
    // printf("%p\n",ptr);
    // Mem_Dump();
    // void *ptr1 = Mem_Alloc(4);
    // printf("%p\n",ptr1);
    // Mem_Dump();
    //(*blk_hdr)(ptr)->size_status
    //Mem_Dump();
    exit(0);
}

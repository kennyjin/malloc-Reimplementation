/* first pointer returned is 8-byte aligned */
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "mem.h"

int main() {
   assert(Mem_Init(4096) == 0);
   int* ptr = (int*) Mem_Alloc(sizeof(int));
   // Mem_Dump();
   // if(ptr == NULL)
   // {
   //     printf("ptr is NULL.\n");
   // }
   // printf("%d\n",((int)ptr));
   // printf("%d\n",((int)ptr) % 8);
   assert(ptr != NULL);
   assert(((int)ptr) % 8 == 0);
   exit(0);
}

#include <assert.h>
#include <stdlib.h>
#include "mem.h"

int main()
{
	assert(Mem_Init(4096) == 0);
	void *ptr = Mem_Alloc(1);
	Mem_Dump();
	assert(ptr != NULL);
}
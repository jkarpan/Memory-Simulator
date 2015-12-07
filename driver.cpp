//WRITTEN BY JORDAN KARPAN 5041823

#include "memory.h"

//I may be nearly empty, but I still do things!
int main(){
	memory m(200);
	for (int i = 0; i < 20; i++)
	{
		m.store(i, i);
	}
	printf("RETRIEVE(15) VALUE: %d\n",m.retrieve(15));
	printf("dump value from 0 to 15:\n");
	m.dump(0, 10);
	printf("Copying from position 0 to position 15, starting writing at position 16...\n");
	m.copy(16, 16, 0);
	printf("full dump of memory:\n");
	m.dump();
}
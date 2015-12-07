//WRITTEN BY JORDAN KARPAN 5041823

#include "memory.h"

vector<int> memCore;

memory::memory (int size) //initialize our memory with a size.
{
	for(int i = 0; i < size; i++)
	{
		memCore.push_back(0);
	}
}

memory::memory()//No argument version for memory initialization, defaults to 100 positions.
{
	for(int i = 0; i < 100; i++)
	{
		memCore.push_back(0);
	}
}

void memory::store(int addr, int value) //Store a value at a given position in memory.
{
	if (addr >= memCore.size() || addr < 0)
	{
		return; //We cannot assign to a location beyond the maximum or minimum length of memory.
	}
	memCore[addr] = value; //otherwise, assign the value.
	return;
}

int memory::retrieve (int addr) //Gets the value from a location in memory.
{
	if (addr >= memCore.size() || addr < 0)
	{
		printf("Reading outside the bounds of memory! May cause errors!\n");
	}
	return memCore[addr];
}

void memory::copy (int toAddr, int size, int fromAddr) //Copies values from one location of memory to another. Overwrites any previous values in memory that were stored.
{
	if (size <= 0) return; //If whoever uses this decides to be funny and copy any amount of memory less than or equal to zero, just return because index errors will occur.
	if (toAddr < 0) return; //Cannot copy to positions before memory.
	if ((toAddr + size) >= memCore.size()) return; //Check if we go beyond the bounds of the memory.
	
	int *tmp = new int[size]; //Otherwise, we'll make a buffer and copy the values in memory.
	
	for (int i = 0; i < size; i++) //Store them to the temporary buffer...
	{
		tmp[i] = memCore[fromAddr + i];
	}
	
	for (int i = 0; i < size; i++) //Then copy them to our destination.
	{
		memCore[toAddr + i] = tmp[i];
	}
	delete[] tmp;
}

void memory::dump (int startAddr, int endAddr) //Dumps at a given start point and dumps until the given endpoint.
{
	if (endAddr < startAddr) //Ensure that we have a valid amount of memory to dump. We can't dump a negative amount of memory!
	{
		printf("Cannot dump memory between positions - end address is before start address!\n");
		return;
	}
	if (startAddr < 0) return; //Cannot dump before start position!
	if (endAddr > memCore.size()) return; //Cannot dump beyond end of memory.
	int sum = 0;
	printf("Address       Value\n-------------------\n");
	for (int i = 0; i + startAddr < endAddr; i++)
	{
		sum = i + startAddr;
		printf("%d            %d\n", sum, memCore[sum]);
	}
	printf("\n");
}

void memory::dump () //Dumps all memory locations, regardless of the locations were written to. A function like this would be useful for debugging to ensure memory is accessed/written to/read from properly.
{
	printf("Address       Value\n-------------------\n");
	for (int i = 0; i < memCore.size(); i++) //do not use sizeof!!
	{
		printf("%d            %d\n", i, memCore[i]);
	}
	printf("\n");
}
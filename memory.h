//WRITTEN BY JORDAN KARPAN 5041823

#ifndef MEMORY
#define MEMORY
#endif

#include <cstdio>
#include <vector>

using namespace std;

struct memory{
	private:
		vector<int> memCore;
	public:
		memory (int size);
		memory();
		void store(int addr, int value);
		int retrieve (int addr);
		void copy (int toAddr, int size, int fromAddr);
		void dump (int startAddr, int endAddr);
		void dump ();
};
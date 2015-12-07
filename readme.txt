    __  ___                                   _____ _                 __      __            
   /  |/  /__  ____ ___  ____  _______  __   / ___/(_)___ ___  __  __/ /___ _/ /_____  _____
  / /|_/ / _ \/ __ `__ \/ __ \/ ___/ / / /   \__ \/ / __ `__ \/ / / / / __ `/ __/ __ \/ ___/
 / /  / /  __/ / / / / / /_/ / /  / /_/ /   ___/ / / / / / / / /_/ / / /_/ / /_/ /_/ / /    
/_/  /_/\___/_/ /_/ /_/\____/_/   \__, /   /____/_/_/ /_/ /_/\__,_/_/\__,_/\__/\____/_/      
                                 /____/                                                     

1. COMPILING THIS SOURCE CODE

From a terminal, type "make" to build the application. To remove the executable and objects
that are generated in the build process, type "make clean". The program should compile with
no errors.

2. RUNNING THE APPLICATION

Type "./main" to run the application. It is expected that the program should run without any
errors.

3. ABOUT THE MEMORY.CPP CLASS

The memory.cpp class was coded with idiot-proofing in mind. Here is a rundown of the functions:


	memory (int size);
This starts up an instance of memory with a user-defined size of positions.

	memory();
This starts up an instance of memory with a default of 100 positions.

	void store(int addr, int value);
Stores a value at a particular location in memory. Will fail and return if the value of addr
goes beyond the maximum/minimum size of memory.

	int retrieve (int addr);
Gets a value from an address in memory. May cause issues if addr beyond the maximum/minimum
size of memory.

	void copy (int toAddr, int size, int fromAddr);
Copies size elements from fromAddr to toAddr. Will not copy if size is 0 or if toAddr is less
than 0 or if the destination and size go beyond the end of memory.

	void dump (int startAddr, int endAddr);
Dumps from position startAddr to position endAddr. Will return if endAddr is less than startAddr
or if startAddr/endAddr go beyond the size of memory.

	void dump ();
Dumps the entire instance of memory to the screen.



CODE WRITTEN BY JORDAN KARPAN (5041823)
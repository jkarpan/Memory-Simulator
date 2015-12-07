#	Written by Jordan Karpan - 5041823

main: memory.o driver.o
		g++ memory.o driver.o -o main

memory.o: memory.cpp memory.h
		g++ -c memory.cpp
		
driver.o: driver.cpp memory.h
		g++ -c driver.cpp
		
clean:
		rm *.o main
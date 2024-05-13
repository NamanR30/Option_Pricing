CC = g++
CFLAGS = -Wall -ggdb3 -std=c++11

find_defintegral: find_defintegral.o  find_definite_integral.o
	$(CC) $(CFLAGS) -o find_defintegral find_defintegral.o  find_definite_integral.o

find_defintegral.o: find_defintegral.cpp definite_integral.h
	$(CC) $(CFLAGS) -c find_defintegral.cpp

find_definte_integral.o:  definite_integral.h find_definite_integral.cpp
	$(CC) $(CFLAGS) -c find_definite_integral.cpp
	
clean:
	rm -rf find_defintegral *.o

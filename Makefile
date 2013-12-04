CC=g++
CFLAGS=-o

all:

test: test_pair.cpp 
	$(CC) $(CFLAGS) test.exe test_pair.cpp 
	

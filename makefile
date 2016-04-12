FLAGS= -g -std=c++11

all: bst

bst: driver.o BST.o
	g++ $(FLAGS) driver.o BST.o -o bst
	
driver.o: driver.cpp
	g++ $(FLAGS) -c driver.cpp -o driver.o
	
BST.o:	BST.cpp BST.h
	g++ $(FLAGS) -c BST.cpp -o BST.o
	
clean: 
	rm -f *.o bst
	
	








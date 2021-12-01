CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB= my_mat.h my_mat.o
FLAGS= -g -Wall


all:my_mat.so  connections
#programs.exe
connections:$(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) ./my_mat.so -lm


#libs
my_mat.so:$(OBJECTS_LIB)
	$(CC) -shared -o my_mat.so $(OBJECTS_LIB)

#simple objects
main.o: main.c my_mat.h  
	$(CC) $(FLAGS) -c main.c
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FALGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
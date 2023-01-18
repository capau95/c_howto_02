all: kb kbfunc

random: random.o
	gcc -o random random.o

kb.o: kb.c
	gcc -c random.o random.c

clean: 
	-rm -f random.o	
	-rm -f random

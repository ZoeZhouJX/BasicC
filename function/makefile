count:demoFunc.o calculateFunc.o myString.o
	gcc -g demoFunc.o calculateFunc.o -o count my String.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculateFunc.o:calculateFunc.c
	gcc -c calculateFunc.c -o calculateFunc.o

myString.o:myString.c
	gcc -c myString.c -o myString.o

clean:
	@rm -rf *.o count
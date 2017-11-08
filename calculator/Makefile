all:main

main:main.o add.o sub.o mul.o div.o fact.o squ.o cub.o mod.o expo.o 
	gcc -o calculator main.o add.o sub.o mul.o div.o fact.o squ.o cub.o mod.o expo.o

main.o:main.c
	gcc -c -o main.o main.c

add.o:add.c
	gcc -c -o add.o add.c

sub.o:sub.c
	gcc -c -o sub.o sub.c

mul.o:mul.c
	gcc -c -o mul.o mul.c

div.o:div.c
	gcc -c -o div.o div.c

fact.o:fact.c
	gcc -c -o fact.o fact.c

squ.o:squ.c
	gcc -c -o squ.o squ.c

cub.o:cub.c
	gcc -c -o cub.o cub.c

mod.o:mod.c
	gcc -c -o mod.o mod.c

expo.o:expo.c
	gcc -c -o expo.o expo.c

clean:
	rm -rf *.o
	rm -rf calculator 
	
	
	 	
	

all:main
    
main:main.o mul.o div.o
	gcc -o main main.o mul.o div.o

main.o:main.c
	gcc -c -o main.o main.c

mul.o:mul.c
	gcc -c -o mul.o mul.c

div.o:div.c
	gcc -c -o div.o div.c

clean:
	rm -rf *.o
	rm -rf main
			 	   

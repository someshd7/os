all:app

app:main.o scandir.o strsrch.o list.o fdupes.o
	gcc -o app main.o scandir.o strsrch.o list.o fdupes.o

main.o:main.c
	gcc -c -o main.o main.c

scandir.o:scandir.c
	gcc -c -o scandir.o scandir.c

strsrch.o:strsrch.c
	gcc -c -o strsrch.o strsrch.c

list.o:list.c
	gcc -c -o list.o list.c

fdupes.o:fdupes.c
	gcc -c -o fdupes.o fdupes.c
	
clean:
	rm -rf *.o
	
cleanapp:	
	rm -rf app

all:app

app:main.o scan_dir.o strsrch.o show_list.o fdupes.o mytimer.o log_open.o
	gcc -o app main.o scan_dir.o strsrch.o show_list.o fdupes.o mytimer.o log_open.o

main.o:main.c
	gcc -c -o main.o main.c

scan_dir.o:scan_dir.c
	gcc -c -o scan_dir.o scan_dir.c

strsrch.o:strsrch.c
	gcc -c -o strsrch.o strsrch.c

show_list.o:show_list.c
	gcc -c -o show_list.o show_list.c

fdupes.o:fdupes.c
	gcc -c -o fdupes.o fdupes.c

mytimer.o:mytimer.c
	gcc -c -o mytimer.o mytimer.c

log_open.o:log_open.c
	gcc -c -o log_open.o log_open.c
	
clean:
	rm -rf *.o
	
cleanapp:	
	rm -rf app

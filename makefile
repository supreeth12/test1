ABC.exe:bign.o fact.o main.o reverse.o
	gcc -o ABC.exe bign.o fact.o main.o reverse.o
bign.o:bign.c
	gcc -c bign.c
fact.o:fact.c
	gcc -c fact.c
main.o:main.c
	gcc -c main.c
reverse.o:reverse.c
	gcc -c reverse.c
clean:
	rm -rf *.o ABC.exe
	echo "all file deleted"
	mkdir suppi

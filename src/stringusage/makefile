all: stringclass.exe

stringclass.exe:stringclass.o
	 g++ -o ../../out/stringclass.exe  stringclass.o

stringclass.o: stringclass.c
	 g++ -c stringclass.c
     
clean:
	 rm stringclass.o ../../out/stringclass.exe

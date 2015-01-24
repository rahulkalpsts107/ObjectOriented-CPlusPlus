all: vectorUsage.exe

vectorUsage.exe:vectorUsage.o
	 g++ -o ../../out/vectorUsage.exe  vectorUsage.o

vectorUsage.o: vectorUsage.c
	 g++ -c vectorUsage.c
     
clean:
	 rm vectorUsage.c.o ../../out/vectorUsage.exe

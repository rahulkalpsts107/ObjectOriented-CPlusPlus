all: fileStreamUsage.exe

fileStreamUsage.exe:fileStreamUsage.o
	 g++ -o ../../out/fileStreamUsage.exe  fileStreamUsage.o

fileStreamUsage.o: fileStreamUsage.c
	 g++ -c fileStreamUsage.c
     
clean:
	 rm fileStreamUsage.o ../../out/fileStreamUsage.exe

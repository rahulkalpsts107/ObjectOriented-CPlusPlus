all: friendUsage.exe

friendUsage.exe:friendUsage.o
	 g++ -o ../../out/friendUsage.exe  friendUsage.o

friendUsage.o: friendUsage.cpp
	 g++ -c friendUsage.cpp
     
clean:
	 rm friendUsage.o ../../out/friendUsage.exe

all: overloadexample.exe

overloadexample.exe:overloadexample.o
	 g++ -o ../../out/overloadexample.exe  overloadexample.cpp

overloadexample.o: overloadexample.cpp
	 g++ -c overloadexample.cpp
     
clean:
	 rm overloadexample.o ../../out/overloadexample.exe

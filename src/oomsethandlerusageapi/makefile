all: oomsethandlerusage.exe

oomsethandlerusage.exe:oomsethandlerusage.o
	 g++ -o ../../out/oomsethandlerusage.exe  oomsethandlerusage.o

oomsethandlerusage.o:oomsethandlerusage.c
	 g++ -c oomsethandlerusage.c
     
clean:
	 rm oomsethandlerusage.o ../../out/oomsethandlerusage.exe

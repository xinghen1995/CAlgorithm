exec_dir = ../bin

all: TimeDemo StrftimeDemo LowerIO GetCharByLowerIOBuffer CopyByLowerIO

TimeDemo: TimeDemo.c
	gcc -g TimeDemo.c -o $(exec_dir)/TimeDemo

StrftimeDemo: StrftimeDemo.c
	gcc -g StrftimeDemo.c -o ../bin/StrftimeDemo

LowerIO: LowerIO.c
	gcc -g LowerIO.c -o ../bin/LowerIO

GetCharByLowerIO: GetCharByLowerIO.c
	gcc -g GetCharByLowerIO.c -o ../bin/GetCharByLowerIO

GetCharByLowerIOBuffer: GetCharByLowerIOBuffer.c
	gcc -g GetCharByLowerIOBuffer.c -o ../bin/GetCharByLowerIOBuffer

CopyByLowerIO: CopyByLowerIO.c Error.c
	gcc -g CopyByLowerIO.c Error.c -o ../bin/CopyByLowerIO

.PHONY: clean
clean:
	rm -rf *.o ../bin
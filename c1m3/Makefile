CC      = gcc
SOURCES =  ./misc.c ./main.c
LDFLAGS = ./misc.h
MAPFILE = -Wl, -Map=c1m3.map


.PHONY: build
build: $(SOURCES)
	$(CC) $(SOURCES) $(LDFLAGS) -o c1m3.out

.PHONY: clean
clean:
	rm -f *.o *.asm *.i *.d *.map *.out	

.PHONY: dump
dump: $(SOURCES)
	objdump -x c1m3.out
ifdef OS  #Windows OS Detection
	CC := gcc.exe
	FLAGS := -lwinmm
	FixPath = $(subst /,\,$1)
	UNAME := Windows
	EXT := .exe
else  	  #*NIX using GNU make
	CC := gcc
	FixPath = $1
	UNAME = $(shell uname)
	EXT :=
	ifeq ($(UNAME),Darwin) #MacOS
		FLAGS = -framework AudioUnit
	endif
	ifeq ($(UNAME),Linux) #Linux
		FLAGS = -lasound -lm
	endif
endif

CFLAGS := -O2 -s -w
INCLUDES := -I./ 
OUTDIR := out/

ex0 := beep
ex1 := astronomia
ex2 := despacito
ex3 := imperial
ex4 := jingleBell
ex5 := mario_intro
ex6 := star_wars
ex7 := zelda_SOT

all: $(OUTDIR) $(ex0) $(ex1) $(ex2) $(ex3) $(ex4) $(ex5) $(ex6) $(ex7)

$(OUTDIR):
	mkdir $(OUTDIR)

$(ex0): $(ex0).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex0)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex1): examples/$(ex1).c Beep.h Notes.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex1)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex2): examples/$(ex2).c Beep.h Notes.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex2)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex3): examples/$(ex3).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex3)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex4): examples/$(ex4).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex4)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex5): examples/$(ex5).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex5)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex6): examples/$(ex6).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex6)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

$(ex7): examples/$(ex7).c Beep.h
	$(CC) -o $(call FixPath,$(OUTDIR)$(ex7)) $< $(FLAGS) $(CFLAGS) $(INCLUDES)

clean:
	rm -f -r -d $(call FixPath,$(OUTDIR))

.PHONY: all clean
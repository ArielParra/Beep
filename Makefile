ifdef OS  #Windows OS Detection
	CC := gcc.exe
	FLAGS := -lwinmm
	RM := del /Q
	FixPath = $(subst /,\,$1)
	UNAME := Windows
	EXT := .exe
else  	  #*NIX using GNU make
	CC := gcc
	RM := rm -f 
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

Name1 := beep_utility-$(UNAME)
Name2 := beep_mario-$(UNAME)
Name3 := beep_jingleBell-$(UNAME)

all: $(Name1) $(Name2) $(Name3)

$(Name1): beep.c Beep.h
	$(CC) -o $(call FixPath,$(Name1)) $< $(FLAGS) $(CFLAGS)

$(Name2): beep_mario.c Beep.h
	$(CC) -o $(call FixPath,$(Name2)) $< $(FLAGS) $(CFLAGS)

$(Name3): beep_jingleBell.c Beep.h
	$(CC) -o $(call FixPath,$(Name3)) $< $(FLAGS) $(CFLAGS)

clean:
	$(RM) $(call FixPath,$(Name1)$(EXT))
	$(RM) $(call FixPath,$(Name2)$(EXT))
	$(RM) $(call FixPath,$(Name3)$(EXT))

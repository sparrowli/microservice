
CC = gcc

SDIR = ./src
IDIR = ./include
ODIR = obj
BDIR = bin
LDIR = ./lib

LIBS = -lm

CFLAGS = -I.

#_DEPS = AudioMix.h
#DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = AudioMix.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_TEST_OBJ = AudioMix.o AudioMixSpec.o
TEST_OBJ = $(patsubst %,$(ODIR)/%,$(_TEST_OBJ))

$(ODIR)/%.o: src/%.cpp 
	$(CXX) -c -o $@ $^ $(CFLAGS)

$(ODIR)/%.o: test/%.cpp
	$(CXX) -c -o $@ $^ $(CFLAGS)

AudioMix: $(OBJ)
	$(CXX) -o bin/$@ $^ $(CFLAGS)

AudioMixSpec: $(TEST_OBJ)
	$(CXX) -o bin/$@ $^ $(CFLAGS) $(LDIR)/*.a

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BDIR)/*

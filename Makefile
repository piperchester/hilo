DEPENDENCIES = first.cpp
EXE = first
TESTFILE = test.txt

all: build

build:
	g++ $(DEPENDENCIES) -o $(EXE)

test:
	./$(EXE)

clean:
	rm $(EXE)

run:
	./$(EXE)
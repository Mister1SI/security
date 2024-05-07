SRC=$(wildcard *.c)
EXE=security

all: run

run: $(EXE)
	@./$(EXE)
	
$(EXE): $(SRC)
	@gcc -o $(EXE) $(SRC)
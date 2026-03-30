APPS = ./app
BIN = ./bin
INCLUDE = ./include
LIBDIR = ./lib
FLAGS = -Wall -Werror  
FLAGGLUT = -lGL -lGLU -lglut

LIB1 = $(LIBDIR)/libebheap.a
LIB2 = $(LIBDIR)/libebinsertion.a

all: myapps

myapps: cleanapp $(BIN)/app

$(BIN)/%: $(APPS)/%.c $(LIB1) $(LIB2)
	gcc $(FLAGS) $< -L$(LIBDIR) -lebheap -lebinsertion -I $(INCLUDE) -o $@ $(FLAGGLUT)

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/*

cleanapp:
	rm -rf $(BIN)/*
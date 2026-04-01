APPS = ./app
BIN = ./bin
INCLUDE = ./include
LIBDIR = ./lib
FLAGS = -Wall -Werror  
FLAGGLUT = -lGL -lGLU -lglut

LIB = $(LIBDIR)/libdsa.a

all: myapps

myapps: cleanapp $(BIN)/app

$(BIN)/%: $(APPS)/%.c $(LIB)
	gcc $(FLAGS) $< -L$(LIBDIR) -ldsa -I $(INCLUDE) -o $@ $(FLAGGLUT)

run:
	$(BIN)/app

clean:
	rm -rf $(BIN)/*

cleanapp:
	rm -rf $(BIN)/*
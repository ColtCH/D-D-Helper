SRCS := district/* init.cpp
TARG := dnd
FLAG := -std=c++11 -Wall
COMP := g++

make:
	$(COMP) $(SRCS) $(FLAG) -o $(TARG)

run:
	./$(TARG)

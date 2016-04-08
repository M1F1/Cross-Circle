CC= g++
CFLAGS= -Wall -g -std=c++11
SRC= $(wildcard *.cpp)
OBJS= $(SRC:.cpp=.o)
MAIN= XOXO

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(MAIN)
mem:
	valgrind --tool=memcheck --leak-check=full -v ./$(MAIN)
run:
	./$(MAIN)

.PHONY: clean
.PHONY: mem
.PHONY: run

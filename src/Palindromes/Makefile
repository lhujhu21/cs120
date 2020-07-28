CC=cc
CFLAGS=-I.
DEPS = 
OBJ = palindrome.o

%.o: %.c $(DEPS)
	   $(CC) -c -o $@ $< $(CFLAGS)

palindrome: $(OBJ)
	   $(CC) -o $@ $^ $(CFLAGS)
.PHONY: clean

clean:
	rm -f $(OBJ)


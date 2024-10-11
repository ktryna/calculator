CC = gcc
CFLAGS = -Wall -g
OBJ = calc.o main.o
TARGET = calculator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

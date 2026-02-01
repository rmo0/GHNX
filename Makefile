CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -I include
SRC = source/main.c
TARGET = ghnx

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	$(RM) $(TARGET)

CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRCS = src/main.c src/book.c
OBJS = $(SRCS:.c=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET) *.o library.dat

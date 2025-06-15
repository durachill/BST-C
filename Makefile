CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror -pedantic -g
INCLUDES = -ITree -IInterface


SOURCES = src/main.c \
          Tree/tree.c \
          Interface/interface.c

HEADERS = Tree/tree.h

TARGET = treeUT

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean

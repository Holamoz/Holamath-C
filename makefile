SHELL = /bin/sh
CC = gcc
CFLAGS = -Wall -std=gnu99 -lquadmath -lm -lpthread -lOpenCL -march=native -fPIC -c

C_FILES = $(shell find src -name "*.c")
OBJ = $(patsubst %.c, %.o, $(C_FILES))
OBJ_FILE = $(find src -name "*.o")

TARGET = libholamath.so

.PHONY: all clean

all: $(TARGET)

clean:
	-@rm $(OBJ_FILE) $(TARGET)

$(TARGET): $(OBJ)
	@echo Makeing Shared library $@
	@$(CC) -shared -o $@ $^

%.0: %.c
	@echo Compiling and generating object $@
	@$(CC) $(CFLAGS) -o $@ $<

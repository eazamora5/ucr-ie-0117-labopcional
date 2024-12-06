# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
OBJ = main.o person.o sort.o
TARGET = labopcional

# Compilación del ejecutable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compilación de los archivos .c
main.o: main.c person.h sort.h
	$(CC) $(CFLAGS) -c main.c

person.o: person.c person.h
	$(CC) $(CFLAGS) -c person.c

sort.o: sort.c sort.h person.h
	$(CC) $(CFLAGS) -c sort.c

# Limpieza de archivos temporales
clean:
	rm -f $(OBJ) $(TARGET)

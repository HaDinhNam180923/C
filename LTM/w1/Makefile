CC = gcc
CFLAGS = -Wall
TARGET = userManagement

all: $(TARGET)

$(TARGET): userManagement.o
	$(CC) $(CFLAGS) -o $(TARGET) userManagement.o

userManagement.o: userManagement.c
	$(CC) $(CFLAGS) -c userManagement.c

clean:
	rm -f *.o $(TARGET)

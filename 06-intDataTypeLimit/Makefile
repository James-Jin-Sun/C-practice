CC = D:/msys64/ucrt64/bin/gcc.exe
CFLAGS = -BD:/msys64/ucrt64/bin/ -std=c11 -Wall -Wextra -Wconversion -pedantic -g
TARGET = intDataTypeLimit
SOURCES = intDataTypeLimit.c

# Default target
all: $(TARGET).exe

# Build target
$(TARGET).exe: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET).exe

# Run target
run: $(TARGET).exe
	./$(TARGET).exe

# Clean build artifacts
clean:
	rm -f *.exe *.o

# Debug build
debug: CFLAGS += -DDEBUG -O0
debug: $(TARGET).exe

# Release build (optimized)
release: CFLAGS += -DNDEBUG -O2 -s
release: $(TARGET).exe

.PHONY: all run clean debug release
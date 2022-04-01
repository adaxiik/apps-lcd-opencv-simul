CC = g++
CFLAGS = -Wall -g -O2 -pthread
LIBS = -lm -lSDL2

main: main-lcd-simul.cpp lcd_lib.cpp
	$(CC) main-lcd-simul.cpp lcd_lib.cpp $(CFLAGS) $(LIBS) -o main
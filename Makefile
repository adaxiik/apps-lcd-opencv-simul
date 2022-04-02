CC = g++
#CC = clang++ -std=c++11 -stdlib=libc++ # Might be needed for mac

CFLAGS = -Wall -g -O2 -pthread -fsanitize=address
LIBS = -lm -lSDL2

main: main-lcd-simul.cpp lcd_lib.cpp
	$(CC) main-lcd-simul.cpp lcd_lib.cpp $(CFLAGS) $(LIBS) -o main
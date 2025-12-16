abt: main.o ui.o
	g++ -o abt ui.o main.o

main.o:
	g++ -c src/main.cpp main.o
ui.o:
	g++ -c src/ui.cpp ui.o

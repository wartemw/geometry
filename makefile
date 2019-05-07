all: Geometry
	Geometry: main.o Figure.o Output.o Pars.o
	g++ main.o Figure.o Output.o Pars.o

main.o: main.cpp
	g++ main.cpp -Wall -o main.o

Figure.o: Figure.cpp
	g++ Figure.cpp -Wall -o Figure.o

Output.o: Output.cpp
	g++ Output.cpp -Wall -o Output.o
Output.o: Pars.cpp
	g++ Pars.cpp -Wall -o Pars.o

clean:
	rm -rf *.o Geometry

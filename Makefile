# $SUMMER2013/SpadesProject/Makefile

.PHONY: clean

spades: objects.o
	g++ objects.o -o spades

objects.o: objects.cpp
	g++ -c objects.cpp

clean:
	rm *.o

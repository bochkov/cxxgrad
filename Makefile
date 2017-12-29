all:
	g++ -c src/thermocouple/thermocouple.cpp -o build/thermocouple.o
	g++ -c src/thermocouple/jkj.cpp -o build/jkj.o
	g++ -c src/thermocouple/mkm.cpp -o build/mkm.o

	g++ -shared -o build/libthermo.so \
		build/thermocouple.o \
		build/jkj.o \
		build/mkm.o

test: all
	g++ -c src/test.cpp -o build/test.o
	g++ -o build/test build/libthermo.so build/test.o

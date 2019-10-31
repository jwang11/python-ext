all: pycall pycallclass

pycall: pycall.c
	gcc -o libpycall.so -shared -fPIC pycall.c

pycallclass: pycallclass.cpp
	g++ -o libpycallclass.so -shared -fPIC pycallclass.cpp

.PHONY: clean
clean:
	@rm libpycall.so libpycallclass.so


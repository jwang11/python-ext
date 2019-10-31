all: pycall

pycall: pycall.c
	gcc -o libpycall.so -shared -fPIC pycall.c

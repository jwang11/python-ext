import ctypes

LIBNAME = "./libpycall.so"
caller = ctypes.cdll.LoadLibrary(LIBNAME) 
print(caller.add(1, 3))

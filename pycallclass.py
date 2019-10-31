import ctypes

LIBNAME = "./libpycallclass.so"

caller = ctypes.cdll.LoadLibrary(LIBNAME)
caller.display()
caller.display_int(100)

TARGET = CppCallCl

CC := /opt/llvm_bin/clang
CPP := /opt/llvm_bin/clang++
AR := /opt/llvm_bin/llvm-ar

CSRCS = $(wildcard ./*.c)
CXXSRCS = $(wildcard ./*.cpp)
COBJS = $(patsubst %.c, %.c.o, $(CSRCS))
CXXOBJS = $(patsubst %.cpp, %.cpp.o, $(CXXSRCS))
INCS = -I./

COMPILE_OPT = -g -Wall
C_COMPILE_OPT = $(COMPILE_OPT)
CXX_COMPILE_OPT = $(COMPILE_OPT)



.PHONY:all clean myecho

all: $(TARGET)

$(TARGET): $(CXXOBJS) libCl.a
	$(CPP) -o $@ $^ $(CXX_COMPILE_OPT)

libCl.a: $(COBJS)
	$(AR) rsc $@ $^

%.c.o: %.c
	$(CC) -o $@ -c $^ $(C_COMPILE_OPT)
%.cpp.o: %.cpp
	$(CPP) -o $@ -c $^ $(CXX_COMPILE_OPT)

myecho:
	@echo CXXOBJS = $(CXXOBJS)

clean:
	$(RM) $(CXXOBJS) $(COBJS) libCl.a $(TARGET)
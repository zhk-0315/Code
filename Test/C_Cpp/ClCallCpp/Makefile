TARGET = ./ClCallCpp

CC = gcc
CPP = g++

CSRCS = $(wildcard ./*.c)
COBJS = $(patsubst %.c, %.c.o, $(CSRCS))

CXXSRCS = $(wildcard ./*.cpp)
CXXOBJS = $(patsubst %.cpp, %.cpp.o, $(CXXSRCS))

INCS = -I./

C_LIBS = -lstdc++
CXX_LIBS = 

COMPILE_OPT = -g -Wall
C_COMPILE_OPT = $(COMPILE_OPT) $(C_LIBS)
CXX_COMPILE_OPT = $(COMPILE_OPT) $(CXX_LIBS)

.PHONY: all $(TARGET) clean myecho

all: $(TARGET) myecho

$(TARGET): $(COBJS) $(CXXOBJS)
	$(CC) -o $@ $^ $(INCS) $(C_COMPILE_OPT)

%.c.o: %.c
	$(CC) -o $@ -c $^ $(INCS) $(C_COMPILE_OPT) 

%.cpp.o: %.cpp
	$(CPP) -o $@ -c $^ $(INCS) $(CXX_COMPILE_OPT)

myecho:

clean:
	$(RM) $(COBJS) $(CXXOBJS) $(TARGET)
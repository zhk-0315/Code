TARGET = Robot

CC = /usr/bin/gcc
CPP = /usr/bin/g++

COMPILE_OPT = -g -Wall
C_COMPILE_OPT = $(COMPILE_OPT) -lstdc++
CXX_COMPILE_OPT = $(COMPILE_OPT)

CSRCS = 
COBJS = $(patsubst %.c, %.c.o, $(CSRCS))
CXXSRCS = $(wildcard ./main.cpp ./Class/*.cpp)
CXXOBJS = $(patsubst %.cpp, %.cpp.o, $(CXXSRCS))
INCS = -I./ \
	-I./Class

.PHONY: all myecho clean
all: $(TARGET)
$(TARGET): $(CXXOBJS) $(COBJS)
	$(CPP) -o $@ $^ $(CXX_COMPILE_OPT)

%.c.o: %.c
	$(CC) -o $@ -c $^ $(INCS) $(C_COMPILE_OPT)
%.cpp.o: %.cpp
	$(CPP) -o $@ -c $^ $(INCS) $(CXX_COMPILE_OPT)

myecho:
	@echo $(CXXOBJS)

clean:
	$(RM) $(CXXOBJS) $(TARGET)
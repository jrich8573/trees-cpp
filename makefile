# clang makefile for both .c and .cpp programs

MAINPROG=main
CC=clang
CXX=clang++

CPPFLAGS=-g -std=c++11 # change this -std option if you want to use c++ std other
# c++11.  

LFLAGS=
CFLAGS=-g
TARGET=$(MAINPROG)
CPPS=$(wildcard *.cpp)
LINK=clang++ $(CPPFLAGS)


OBJS=$(CPPS:%.cpp=%.o)
DEPENDENCIES = $(CPPS:%.cpp=%.d)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -MMD -o $@ -c $*.cpp


all: $(TARGET)



$(TARGET): $(OBJS)
	$(LINK) $(FLAGS) -o $(TARGET) $^ $(LFLAGS)

clean:
	-/bin/rm -rf *.d *.o $(TARGET)

make.dep: $(DEPENDENCIES)
		-cat $(DEPENDENCIES) > $@

include make.dep

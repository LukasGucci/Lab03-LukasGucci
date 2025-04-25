# Makefile
CXX_FLAG = --std=c++11 -g

all: testbst

testbst: testbst.o intbst.o
	g++ $(CXX_FLAG) -o testbst testbst.o intbst.o

testbst.o: testbst.cpp
	g++ -c $(CXX_FLAG) testbst.cpp

test_intbst: test_intbst.o intbst.o
	g++ $(CXX_FLAG) -o test_intbst test_intbst.o intbst.o

test_intbst.o: test_intbst.cpp
	g++ -c $(CXX_FLAG) test_intbst.cpp

intnst.o: intbst.cpp
	g++ -c $(CXX_FLAG) intbst.cpp

clean:
	rm -f testbst *.o
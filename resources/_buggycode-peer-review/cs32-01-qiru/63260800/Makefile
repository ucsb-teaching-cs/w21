CXX=clang++
#CXX=g++

#CXXFLAGS= -Wall  -std=c++14
CXXFLAGS= -Wall  -std=c++14 -g

BINARIES=hospitalData.o dataProj testStates testSort

all: ${BINARIES}

tests: ${BINARIES}
	./testStates
	./testSort

dataProj: hospitalData.o rating.o dataAQ.o stateHosp.o stateDemog.o demogData.o parse.o main.o
	${CXX} $^ -o $@

testStates: hospitalData.o rating.o stateHosp.o testStates.o dataAQ.o stateDemog.o demogData.o parse.o  tddFuncs.o
	${CXX} $^ -o $@

testSort: hospitalData.o rating.o stateHosp.o testSort1.o dataAQ.o stateDemog.o demogData.o parse.o  tddFuncs.o
	${CXX} $^ -o $@

hospitalData.o: hospitalData.cpp
	g++ --std=c++11 -c hospitalData.cpp

clean:
	/bin/rm -f ${BINARIES} *.o 


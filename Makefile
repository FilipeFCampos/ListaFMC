all: main

CXX = g++
override CXXFLAGS += -g -Wall -pedantic

SRCSQ1 = ./questao1_nivel1/classesq1.cpp ./questao1_nivel1/q1.cpp
HEADERSQ1 = ./questao1_nivel1/classesq1.hpp

SRCSQ2 = ./questao2_nivel1/q2.cpp

SRCSQ4 = ./questao4_nivel1/q4.cpp

q1: $(SRCSQ1) $(HEADERSQ1)
	$(CXX) $(CXXFLAGS) $(SRCSQ1) -o "$@"

q2: $(SRCSQ2)
	$(CXX) $(CXXFLAGS) $(SRCSQ2) -o "$@"

q4: $(SRCSQ4)
	$(CXX) $(CXXFLAGS) $(SRCSQ4) -o "$@"
	
cleanq1:
	rm -f q1

cleanq2:
	rm -f q2

cleanq4:
	rm -f q4
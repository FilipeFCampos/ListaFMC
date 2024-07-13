all: main

CXX = clang++
override CXXFLAGS += -g -Wall -pedantic -fsanitize=address

SRCSQ1 = ./questao1_nivel1/classesq1.cpp ./questao1_nivel1/q1.cpp
HEADERSQ1 = ./questao1_nivel1/classesq1.hpp

SRCSQ4 = ./questao4_nivel1/q4.cpp

q1: $(SRCSQ1) $(HEADERSQ1)
	$(CXX) $(CXXFLAGS) $(SRCSQ1) -o "$@"

q4: $(SRCSQ4)
	$(CXX) $(CXXFLAGS) $(SRCSQ4) -o "$@"
	
cleanq1:
	rm -f q1

cleanq4:
	rm -f q4
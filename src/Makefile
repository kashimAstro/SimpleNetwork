CC=g++
FLAGS= -Wall -std=c++11 -I./ 
SRC=TCPServer.cpp TCPClient.cpp 
OUT=-o libSimpleNetwork.so -fPIC -shared

all:
	$(CC) $(FLAGS) $(SRC) $(OUT)
	$(CC) -c $(SRC)
	ar rvs libSimpleNetwork.a *.o


a.out: main.o 
	g++ main.o message.o  -o a.out

main.o: main.cpp
	g++ -c main.cpp

board_methods.o: chessboard/board_methods.cpp chessboard/board.h chessboard/tile.h
	g++ -c


clean:
	rm *.o
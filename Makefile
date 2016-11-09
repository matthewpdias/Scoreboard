G = g++
GFLAGS = -g -std=c++11 -Wall -W -Werror -pedantic

scoreboard: CScoreboard.o main.o
	$(G) $(GFLAGS) main.o CScoreboard.o -o scoreboard

main.o: main.cpp CScoreboard.h IScoreboard.h

CScoreboard.o: CScoreboard.cpp IScoreboard.h CScoreboard.h

clean:
	rm -f *.o scoreboard

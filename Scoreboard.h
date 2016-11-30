//Cody Selby, Nathaniel Davidson, Matthew Dias, Cameron Williams, Kok (ken) Siew
//Bryan Tham

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include "IScoreboard.h"
#include "ObserverPattern.hpp"
#include <vector>
#include <map>

using namespace std;


class Scoreboard : public IScoreboard, public Observable{
public:
  /* the indx of the vector is the period, the key in map is the player
    and the value associated with the given key is the score for that player */
  int competitors;
  vector<map<int, int> > scores;
  Scoreboard(int, int);
  void setScore(int, int, int);
  int getScore(int, int);
  int getTotalScore(int);
  void clearScoreboard();
};

#endif

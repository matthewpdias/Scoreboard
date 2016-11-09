//Cody Selby, Nathaniel Davidson, Matthew Dias, Cameron Williams, Kok (ken) Siew
//Bryan Tham

#ifndef CSCOREBOARD_H
#define CSCOREBOARD_H

#include "IScoreboard.h"
#include <vector>
#include <map>

using namespace std;


class CScoreboard : public IScoreboard{
public:
  /* the indx of the vector is the period, the key in map is the player
    and the value associated with the given key is the score for that player */
  int competitors;
  vector<map<int, int> > scores;
  CScoreboard(int, int);
  void setScore(int, int, int);
  int getScore(int, int);
  int getTotalScore(int);
  void clearScoreboard();
};

#endif

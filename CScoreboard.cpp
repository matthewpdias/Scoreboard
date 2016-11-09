#include <iostream>
#include <assert.h>
#include "CScoreboard.h"

using namespace std;

CScoreboard::CScoreboard(int competitors, int periods){
  assert(competitors > 1);
  assert(periods > 0);
  //for all of the periods
  this->competitors = competitors;
  for(int i = 0; i < periods; i++){
    //loop over each competitor
    for(int j = 0; j < competitors; j++){
      /*set all scores to zero
      i is the period // j is the competitor //score is zero
      scores[i] is a map
      scores[i][j] is a value for the jth key of that map */
      (scores[i])[j] = 0;
    }
  }

}

void CScoreboard::setScore(int competitors, int period , int score){
  (scores[period-1])[competitors] = score;
}

int CScoreboard::getScore(int competitors, int period){
  return (scores[period-1])[competitors];
}

int CScoreboard::getTotalScore(int competitors){
  int Escore = 0;
  for(int i = 0; i < scores.size(); i++){
    Escore += (scores[i])[competitors];
  }
  return Escore;
}

void CScoreboard::clearScoreboard(){
  for(int i = 0; i < scores.size(); i++){
    for(int j = 0; j < competitors; j++){
      (scores[i])[j] = 0;
    }
  }
}

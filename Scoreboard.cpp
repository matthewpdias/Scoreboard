//Cody Selby, Nathaniel Davidson, Matthew Dias, Cameron Williams, Kok (ken) Siew
//Bryan Tham
#include <iostream>
#include <assert.h>
#include "Scoreboard.h"
#include "ObserverPattern.hpp"
#include <climits>

using namespace std;

Scoreboard::Scoreboard(int comp, int periods){
  assert(comp > 1);
  assert(periods > 0);
  //for all of the periods
  competitors = comp;
  for(int i = 0; i < periods; i++){
    //loop over each competitor
    scores.push_back(map<int, int>());
    for(int j = 0; j < competitors; j++){
      /*set all scores to zero
      i is the period // j is the competitor //score is zero
      scores[i] is a map
      scores[i][j] is a value for the jth key of that map */
      scores[i][j] = 0;
    }
  }

}

void Scoreboard::setScore(int competitors, int period , int score){
  scores[period-1][competitors] = score;
  notifyObservers();
}

int Scoreboard::getScore(int competitors, int period){

  if( competitors  > this->competitors || competitors < 1){
    cout << "Competitor does not exist" << endl;
    return INT_MIN;
  }

  return scores[period-1][competitors];
}

int Scoreboard::getTotalScore(int competitors){

  if( competitors  > this->competitors || competitors < 1){
    cout << "Competitor does not exists" << endl;
    return 0;
  }

  int Escore = 0;
  for(int i = 0; i < scores.size(); i++){
    Escore += scores[i][competitors];
  }
  return Escore;
}

void Scoreboard::clearScoreboard(){
  for(int i = 1; i <= competitors; i++){
    for(int j = 1; j <= scores.size(); j++){
      setScore(i, j, 0);
    }
  }
  notifyObservers();
}

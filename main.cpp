#include <iostream>
#include "CScoreboard.h"
#include "IScoreboard.h"

using namespace std;

int main(int argc, char const *argv[]) {

  CScoreboard myScoreboard(2, 4);

  myScoreboard.setScore(1, 1, 21);
  myScoreboard.setScore(1, 2, 11);
  myScoreboard.setScore(1, 3, 9);
  myScoreboard.setScore(1, 4, 7);
  myScoreboard.setScore(2, 1, 21);
  myScoreboard.setScore(2, 2, 2);
  myScoreboard.setScore(2, 3, 1);
  myScoreboard.setScore(2, 4, 3);

  cout << myScoreboard.getScore(1, 1) << endl;
  cout << myScoreboard.getScore(1, 2) << endl;
  cout << myScoreboard.getScore(1, 3) << endl;
  cout << myScoreboard.getScore(1, 4) << endl;
  cout << myScoreboard.getScore(2, 1) << endl;
  cout << myScoreboard.getScore(2, 2) << endl;
  cout << myScoreboard.getScore(2, 3) << endl;
  cout << myScoreboard.getScore(2, 4) << endl;

  cout << myScoreboard.getTotalScore(1) << endl;
  cout << "SHOULD ERROR" << endl;
  cout << myScoreboard.getTotalScore(3) << endl;

  myScoreboard.clearScoreboard();
  cout << myScoreboard.getTotalScore(1) << endl;
  cout << myScoreboard.getTotalScore(2) << endl;


  return 0;
}

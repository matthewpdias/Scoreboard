#include <iostream>
#include "CScoreboard.h"
#include "IScoreboard.h"

using namespace std;

int main(int argc, char const *argv[]) {

  CScoreboard myScoreboard(2, 4);

  cout << myScoreboard.getScore(1, 1) << endl;
  cout << myScoreboard.getScore(1, 2) << endl;
  cout << myScoreboard.getScore(1, 3) << endl;
  cout << myScoreboard.getScore(1, 4) << endl;
  cout << myScoreboard.getScore(2, 1) << endl;
  cout << myScoreboard.getScore(2, 2) << endl;
  cout << myScoreboard.getScore(2, 3) << endl;
  cout << myScoreboard.getScore(2, 4) << endl;

  return 0;
}

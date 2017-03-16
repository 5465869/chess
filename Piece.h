#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Coordinate.h"
using namespace std;
class Piece{
public:
  Piece();
  ~Piece();
  string get_name();
  string get_team();
  void set_name(string name);
  void set_team(string team);
  Piece * get_Next();
  void set_Next(Piece * next);
  void print_piece_name();
  Coordinate Location;


private:
  string Name;
  string Team;
  Piece *Next;
};

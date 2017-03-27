#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Piece.h"
using namespace std;

class Team{
public:
  Team();
  Team(string team);
  ~Team();
  void delete_piece(Piece);
  int get_count();
  void set_count(int count);
  Piece find_piece(string name, string team);
  void insert_piece(string name, string team_name, int row, int col);
  void print_team();
  string get_team_name();
  Piece* get_Head();


private:
  Piece *Head;
  string team_name;
  int Count;
};

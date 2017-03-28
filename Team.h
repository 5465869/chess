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
  ~Team();
  void delete_piece(int row, int col);
  void set_team_name(string name);
  void initialize_team();
  int get_count();
  void set_count(int count);
  Piece find_piece(string name);
  void insert_piece(string name, string team_name, int row, int col);
  void print_team();
  string get_team_name();
  Piece* get_Head();


private:
  Piece *Head;
  string team_name;
  int Count;
};

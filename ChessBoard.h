#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Team.h"
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

class ChessBoard{
public:
  ChessBoard();
  ~ChessBoard();
  int get_rows();
  int get_cols();
  Piece get_empty();
  Piece get_board(int r, int c);
  void set_board(int row, int col, Piece piece);
  void set_piece(int row, int col, int moved); // adjusts the value of the piece
  void initialize_board(int row, int col, string empty);
  void print_board();
  void read_board(string filename);
  void write_board(string filename);
  Team black;
  Team white;
private:
  int Rows;
  int Cols;
  Piece Board[MAX_ROWS][MAX_COLS];
  Piece Empty;
};

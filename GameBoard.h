#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

class GameBoard{
public:
  GameBoard();
  ~GameBoard();
  int get_rows();
  int get_cols();
  char get_empty();
  char get_board(int r, int c);
  void set_board(int row, int col, char value);
  void initialize_board(int row, int col, char empty);
  void print_board();
  void read_board(string filename);
  void write_board(string filename);
  void flood_fill(int r, int c, int start_r, int start_c, char filler, int radius);



private:
  int Rows;
  int Cols;
  char Board[MAX_ROWS][MAX_COLS];
  char Empty;
};

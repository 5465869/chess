
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
class Coordinate{
public:
  Coordinate();
  ~Coordinate();
  bool is_equal(int r, int c);
  int get_row();
  int get_column();
  void set_row_col(int row, int col);
  void print();

private:
  int row;
  int col;
};

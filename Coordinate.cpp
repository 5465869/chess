#include "Coordinate.h"

Coordinate::Coordinate(){
  row = 0;
  col = 0;
}
Coordinate::~Coordinate(){

}
bool Coordinate::is_equal(Coordinate one, Coordinate two){
  if((one.row == two.row) && (one.col == two.col))
    return true;
  else return false;
}
int Coordinate::get_row(){
  return row;
}
int Coordinate::get_column(){
  return col;
}
void Coordinate::set_row_col(int row_tmp, int col_tmp){
  row = row_tmp;
  col = col_tmp;
}
void Coordinate::print(){
  cout<<"("<<row<<","<<col<<")";
}

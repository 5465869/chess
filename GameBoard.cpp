#include "GameBoard.h"

GameBoard::GameBoard(){
  Rows = 0;
  Cols = 0;
  Empty = ' ';
  for(int i = 0; i<MAX_ROWS; i++){
    for(int j = 0; j<MAX_COLS; j++){
      Board[i][j] = Empty;
    }
  }
}
GameBoard::~GameBoard(){
  cout<<"Destructor entered"<<endl;
  Rows = 0;
  Cols = 0;
  Empty = ' ';
  for(int i = 0; i<MAX_ROWS; i++){
    for(int j = 0; j<MAX_COLS; j++){
      Board[i][j] = Empty;
    }
  }
}
int GameBoard::get_rows(){
  return Rows;
}
int GameBoard::get_cols(){
  return Cols;
}
char GameBoard::get_empty(){
  return Empty;
}
char GameBoard::get_board(int row, int col){
  if(row<0 || row>Rows){
    return Empty;
  }
  if(col<0 || col > Cols){
    return Empty;
  }
  return Board[row][col];
}
void GameBoard::set_board(int row, int col, char value){
  if(row<0 || row>Rows){
    return;
  }
  if(col<0 || col > Cols){
    return;
  }
  Board[row][col] = value;
}
void GameBoard::initialize_board(int row, int col, char empty){
  Rows = row;
  Cols = col;
  Empty = empty;
  for(int i = 0; i<Rows; i++){
    for(int j = 0; j<Cols; j++){
      Board[i][j] = Empty;
    }
  }
}
void GameBoard::print_board(){
  // Display border
  system("clear");
  for (int c=0; c<Cols; c++)
     cout <<setw(9)<< c;
  cout << "\n";
  int count = 0;
  char border_left = 'A';
  // Display data
  //cout<<Rows<<" "<<Cols<<endl;
  for (int r=0; r<Rows; r++)
  {
     border_left = 'A'+r;
     cout << border_left;
     for (int c=0; c<Cols; c++){
         cout<<setw(9)<< Board[r][c];
     }
     cout << "\n";
     cout << "\n";
     cout << "\n";
  }

  // Display border
  for (int r=0; r<Cols; r++)
     cout <<setw(9)<< r;
  cout << "\n";
}
void GameBoard::read_board(string filename)
{
    ifstream din;
    int counter = 0;
    char getter;
    int col_counter = 0;
    int row_counter = 0;
    din.open(filename);
    // reads in the size and empty character of the board
    din>>Rows;
    din>>Cols;
    din>>Empty;
  while(!din.eof())
  {
    // stores the next character in the row in variable getter then assigns it to the board in row major order
    din>>getter;
    Board[row_counter][col_counter] = getter;
    col_counter++; // keeps track of how far accross the row has been traversed.
      if(col_counter == Cols){
        row_counter++;
        col_counter = 0; // starts back at 0 for the columns once the end of a row has been reached
      }
  }
}
void GameBoard::write_board(string filename)
{
  ofstream dout;
  dout.open(filename);
  dout<<Rows<<" "<<Cols<<" "<<Empty<<endl;
  for(int r = 0; r < Rows; r++){
    for(int c = 0; c < Cols; c++){
      if(c == Cols-1){
        dout<<setw(2)<< Board[r][c];
        dout<<endl; // ensures the formatting is correct with a new line after the end of a column
      }else{
        dout<<setw(2)<< Board[r][c];
      }
    }
  }
  dout.close();
}

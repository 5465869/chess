#include "ChessBoard.h"

ChessBoard::ChessBoard(){
  Rows = 8;
  Cols = 8;
  Empty.set_name(".");
  black.set_team_name("black");
  white.set_team_name("white");
  black.initialize_team();
  white.initialize_team();
  Piece* Temp = white.get_Head();
  int c = 0;
  while(c<Cols && Temp != NULL){
    Board[0][c] = *Temp; // sets it as the piece
    Temp = Temp->get_Next();
    c++;
  }
  c = 0;
  Temp = white.get_Head();
  while(c<16 && Temp!= NULL){
    if(c>7){
      Board[1][c-8] = *Temp;
    }
    Temp = Temp->get_Next();
    c++;
  }
  c = 0;
  Temp = black.get_Head();
  while(c<Cols && Temp!= NULL){
    Board[7][c] = *Temp;
    Temp = Temp->get_Next();
    c++;
  }
  c = 0;
  Temp = black.get_Head();
  while(c<16 && Temp!= NULL){
    if(c>7){
      Board[6][c-8] = *Temp;
    }
    Temp = Temp->get_Next();
    c++;
  }
  for(int c = 0; c<Cols; c++){
    for(int r = 2; r<6; r++){
      Board[r][c] = Empty;
    }
  }
}
ChessBoard::~ChessBoard(){

}
int ChessBoard::get_rows(){
  return Rows;
}
int ChessBoard::get_cols(){
  return Cols;
}
Piece ChessBoard::get_empty(){
  return Empty;
}

Piece ChessBoard::get_board(int row, int col){
  if(row<0 || row>Rows){
    cout<<"error invalid location"<<endl;
    return Empty;
  }
  if(col<0 || col > Cols){
    cout<<"Error invalid location"<<endl;
    return Empty;
  }
  else{
    return Board[row][col];
  }
}
void ChessBoard::set_board(int row, int col, Piece piece){
  if(row<0 || row>Rows){
    return;
  }
  if(col<0 || col > Cols){
    return;
  }
  Board[row][col] = piece;//copy
}
void ChessBoard::set_piece(int row, int col, int moved){

  if(row<0 || row>Rows){
    return;
  }
  if(col<0 || col > Cols){
    return;
  }

  (Board[row][col]).set_moved(moved);

}

/*
void ChessBoard::initialize_board(int row, int col, string empty){
  Rows = row;
  Cols = col;
  Empty = empty;
  for(int i = 0; i<Rows; i++){
    for(int j = 0; j<Cols; j++){
      Board[i][j] = Empty;
    }
  }
  for(int c = 0; c<Cols; c++){
    Board[1][c] = 'p';
  }
  for(int c = 0; c<Cols; c++){
    Board[Rows-2][c] = 'p';
  }

}
*/
void ChessBoard::print_board(){
  // Display border
  system("clear");
  for (int c=0; c<Cols; c++)
     cout <<setw(9)<< c;
  cout << "\n";
  char border_left = 'A';
  // Display data
  //cout<<Rows<<" "<<Cols<<endl;
  for (int r=0; r<Rows; r++)
  {
     border_left = 'A'+r;
     cout << border_left;
     for (int c=0; c<Cols; c++){
         cout<<setw(9);
         Board[r][c].print_piece_name();
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
/*
void ChessBoard::read_board(string filename)
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
*/

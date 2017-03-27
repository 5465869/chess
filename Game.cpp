#include "Game.h"



void Game::controller(){
  string userchoice;
  int r_current, c_current, r_move, c_move;
  cout<<"Would you like to start?"<<endl;
  cin>>userchoice;
  while(userchoice == "yes"){
    board.print_board();
    cout<<"Please enter the location of the piece to be moved then the place you would like to move it"<<endl;;
    cin>>r_current>>c_current>>r_move>>c_move;
    if (cin.fail()) {
      userchoice = "no";
      break;
    }
    //Pawn
    if(board.get_board(r_current, c_current).get_name() == "Pawn"){
      if(legal_pawn_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal Pawn move please try again"<<endl;
      }
    }
    //Bishop
    if(board.get_board(r_current, c_current).get_name() == "Bishop"){
      if(legal_bishop_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal Bishop move please try again"<<endl;
      }
    }
    //Rook
    if(board.get_board(r_current, c_current).get_name() == "Rook"){
      if(legal_rook_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal Rook move please try again"<<endl;
      }
    }
    //Queen
    if(board.get_board(r_current, c_current).get_name() == "Queen"){
      if(legal_queen_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal Queen move please try again"<<endl;
      }
    }
    //King
    if(board.get_board(r_current, c_current).get_name() == "King"){
      if(legal_king_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal King move please try again"<<endl;
      }
    }
    //Knight
    if(board.get_board(r_current, c_current).get_name() == "Knight"){
      if(legal_knight_move(r_current,c_current,r_move,c_move))
      {
        Piece * Temp = board.black.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        Temp = board.white.get_Head();
        while(Temp != NULL){
          if(Temp->Location.is_equal(r_current, c_current)){
            Temp->Location.set_row_col(r_move, c_move);
          }
          Temp = Temp->get_Next();
        }
        board.set_piece(r_current,c_current,1);//sets the piece to moved value 1
        board.set_board(r_move, c_move, board.get_board(r_current, c_current));
        board.set_board(r_current, c_current, board.get_empty());
        cout<<"successful move"<<endl;
      }else
      {
        cout<<"Not a legal Knight move please try again"<<endl;
      }
    }
    board.print_board();
    cout<<"Would you like to continue?"<<endl;
    cin>>userchoice;
  }
}

//probably works (can't castle or check if move would make it go in check)
bool Game::legal_king_move(int r_current, int c_current, int r_move, int c_move){
  //can only move 1 spot
  if (abs(r_current - r_move) <= 1 && abs(c_current - c_move) <= 1) {
    //is empty spot or enemy piece
    if (board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    || board.get_board(r_move, c_move).get_team() != board.get_board(r_current, c_current).get_team()) {
      return true;
    }
  }

  return false;

}
//probably works
bool Game::legal_queen_move(int r_current, int c_current, int r_move, int c_move){
  if (legal_rook_move(r_current, c_current, r_move, c_move) || legal_bishop_move(r_current, c_current, r_move, c_move)) {
    return true;
  } else {
    return false;
  }
}
//works
bool Game::legal_rook_move(int r_current, int c_current, int r_move, int c_move)
{
  Piece * node_black = new Piece();
  Piece * node_white = new Piece();
  node_black = board.black.get_Head();
  node_white = board.white.get_Head();
  if(((c_current-c_move)*(r_current-r_move)) == 0)
  {
    //make sure square is empty or other piece
    if (board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    || board.get_board(r_move, c_move).get_team() != board.get_board(r_current, c_current).get_team())
    {
      cout<<"beginning of while loops"<<endl;
      while(node_black != NULL)
      {
        node_black->print_piece_name();
        cout<<" ";
        node_black->Location.print();
        if(r_move == r_current && node_black->Location.get_row() == r_current)
        {
          cout<<"1"<<endl;
          if(c_move>c_current)
          {
            if(node_black->Location.get_column() > c_move && node_black->Location.get_column() < c_current){
              return false;
            }
          }
          if(c_move<c_current)
          {
            if(node_black->Location.get_column() < c_move && node_black->Location.get_column() > c_current){
              return false;
            }
          }
        }
        if(c_move == c_current && node_black->Location.get_column() == c_move)
        {
          cout<<"2"<<endl;
          if(r_move > r_current){
            cout<<"3"<<endl;
            if(node_black->Location.get_row() < r_move && node_black->Location.get_row() > r_current){
              cout<<"5"<<endl;
              return false;
            }
          }
          if(r_move < r_current){
            cout<<"4"<<endl;
            if(node_black->Location.get_row() > r_move && node_black->Location.get_row() < r_current){
              cout<<"6"<<endl;
              return false;
            }
          }
        }
        node_black = node_black->get_Next();
      }
      while(node_white != NULL)
      {
        node_white->print_piece_name();
        node_white->Location.print();
        if(r_move == r_current && node_white->Location.get_row() == r_current)
        {
          if(c_move>c_current)
          {
            if(node_white->Location.get_column() > c_move && node_white->Location.get_column() < c_current){
              return false;
            }
          }
          if(c_move<c_current)
          {
            if(node_white->Location.get_column() < c_move && node_white->Location.get_column() > c_current){
              return false;
            }
          }
        }
        if(c_move == c_current && node_white->Location.get_column() == c_current)
        {
          cout<<"equal column"<<endl;
          if(r_move>r_current){
            if(node_white->Location.get_row() < c_move && node_white->Location.get_row() > c_current){
              return false;
            }
          }
          if(r_move<r_current){
            if(node_white->Location.get_row() > c_move && node_white->Location.get_row() < c_current){
              return false;
            }
          }
        }
        node_white = node_white->get_Next();
      }
      return true;
    }else{
    }
  }
  cout<<"end"<<endl;
  return false;
}
//works
bool Game::legal_bishop_move(int r_current, int c_current, int r_move, int c_move){
  //temp variables
  int x = c_move;
  int y = r_move;
  //on diagonal line
  if((((double)(c_current-c_move)/(r_current-r_move)) == 1) || (((double)(c_current-c_move)/(r_current - r_move)) == -1)){

    //make sure square is empty or other piece
    cout<<board.get_board(r_move, c_move).get_team()<<endl;
    cout<<board.get_board(r_current, c_current).get_team()<<endl;
    if (board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    || board.get_board(r_move, c_move).get_team() != board.get_board(r_current, c_current).get_team()) {
      //make sure there isn't a piece on its path
      if (r_move < r_current && c_move < c_current) {
        y++;x++;
        while(y != r_current && x != c_current) {
          if (board.get_board(y, x).get_name() != board.get_empty().get_name()) {
            return false;
          }
          y++;
          x++;
        }
      } else if (r_move < r_current && c_move > c_current) {
        y++;x--;
        while(y != r_current && x != c_current) {
          if (board.get_board(y, x).get_name() != board.get_empty().get_name()) {
            return false;
          }
          y++;
          x--;
        }
      } else if (r_move > r_current && c_move < c_current) {
        y--;x++;
        while(y != r_current && x != c_current) {
          if (board.get_board(y, x).get_name() != board.get_empty().get_name()) {
            return false;
          }
          y--;
          x++;
        }
      } else if (r_move > r_current && c_move > c_current) {
        y--;x--;
        while(y != r_current && x != c_current) {
          if (board.get_board(y, x).get_name() != board.get_empty().get_name()) {
            return false;
          }
          y--;
          x--;
        }
      }
      return true;
    }
    return false;
  }else{
    return false;
  }
}
//probably works
bool Game::legal_knight_move(int r_current, int c_current, int r_move, int c_move){
  //knight move legal
  if ((abs(r_current - r_move) == 2 && abs(c_current - c_move) == 1)
  || (abs(r_current - r_move) == 1 && abs(c_current - c_move) == 2)) {
    //spot empty or enemy piece
    if (board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    || board.get_board(r_move, c_move).get_team() != board.get_board(r_current, c_current).get_team()) {
      return true;
    }
    return false;
  }
  return false;
}
//works
bool Game::legal_pawn_move(int r_current, int c_current, int r_move, int c_move){
  if(board.get_board(r_current,c_current).get_team() == "white"){
    //one space move
    if((r_move == (r_current+1))
    && (c_move == c_current)
    && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()){
      return true;
    }
    //taking a piece
    else if(((r_move == (r_current+1))
    && ((c_move == (c_current-1)) || (c_move == (c_current+1)))
    && board.get_board(r_move, c_move).get_name() != board.get_empty().get_name()
    && board.get_board(r_move, c_move).get_team() != "white")){
      return true;
    }
    //two space move
    else if((r_move == (r_current+2))
    && (c_move == c_current)
    && board.get_board(r_move-1, c_move).get_name() == board.get_empty().get_name()
    && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    && board.get_board(r_current, c_current).get_moved() == 0) {
      return true;
    }
    else{
      return false;
    }
  }
  if(board.get_board(r_current,c_current).get_team() == "black"){
    if(r_move == (r_current-1)
    && (c_move == c_current)
    && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()){
      return true;
    }
    else if(((r_move == (r_current-1))
    && ((c_move == (c_current-1)) || (c_move == (c_current+1)))
    && board.get_board(r_move, c_move).get_name() != board.get_empty().get_name()
    && board.get_board(r_move, c_move).get_team() != "black")){
      return true;
    }
    else if((r_move == (r_current-2))
    && (c_move == c_current)
    && board.get_board(r_move+1, c_move).get_name() == board.get_empty().get_name()
    && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()
    && board.get_board(r_current, c_current).get_moved() == 0) {
      return true;
    }
    else{
      return false;
    }
  }
}

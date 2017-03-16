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
    if(board.get_board(r_current, c_current).get_name() == "Pawn"){
      if(legal_pawn_move(r_current,c_current,r_move,c_move)){
        cout<<"successful move"<<endl;
      }else
      {
          cout<<"Not a legal move please try again"<<endl;
      }
    }
/*
    if(board.get_board(r_current, c_current) == board.get_white().get_bishop()){
      if(board.legal_bishop_move(r_current,c_current,r_move,c_move)){
        board.set_board(r_move, c_move, board.get_white().get_bishop());
        board.set_board(r_current, c_current, board.get_empty());
      }
    }
    if((board.get_board(r_current, c_current) == board.get_black().get_bishop())){
      if(board.legal_bishop_move(r_current,c_current,r_move,c_move)){
        board.set_board(r_move, c_move, board.get_black().get_bishop());
        board.set_board(r_current, c_current, board.get_empty());
      }
    }else{
      cout<<"Not a legal bishop move please try again"<<endl;
    }
    */
    board.print_board();
    cout<<"Would you like to continue?"<<endl;
    cin>>userchoice;
  }
}

bool Game::legal_king_move(int r_current, int c_current, int r_move, int c_move){

}
bool Game::legal_queen_move(int r_current, int c_current, int r_move, int c_move){

}
bool Game::legal_rook_move(int r_current, int c_current, int r_move, int c_move){

}
bool Game::legal_bishop_move(int r_current, int c_current, int r_move, int c_move){
  /*
  if((((double)(c_current-c_move)/(r_current-r_move)) == 1) || (((double)(c_current-c_move)/(r_current - r_move)) == -1)){
    return true;
  }else{
    return false;
  }
  */
}
bool Game::legal_knight_move(int r_current, int c_current, int r_move, int c_move){

}
bool Game::legal_pawn_move(int r_current, int c_current, int r_move, int c_move){
  if(board.get_board(r_current,c_current).get_team() == "white"){
    if((r_move == (r_current+1)) && (c_move == c_current) && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()){
      board.set_board(r_move, c_move, board.get_board(r_current,c_current));
      board.set_board(r_current, c_current, board.get_empty());
      return true;
    }
    else if(((r_move == (r_current+1)) && ((c_move == (c_current-1)) || (c_move == (c_current+1))) && board.get_board(r_move, c_move).get_name() != board.get_empty().get_name())){
      board.set_board(r_move, c_move, board.get_board(r_current,c_current));
      board.set_board(r_current, c_current, board.get_empty());
      return true;
    }
    else{
      return false;
    }
  }
  if(board.get_board(r_current,c_current).get_team() == "black"){
    if(r_move == (r_current-1) && (c_move == c_current) && board.get_board(r_move, c_move).get_name() == board.get_empty().get_name()){
      board.set_board(r_move, c_move, board.get_board(r_current,c_current));
      board.set_board(r_current, c_current, board.get_empty());
      return true;
    }
    else if(((r_move == (r_current-1)) && ((c_move == (c_current-1)) || (c_move == (c_current+1))) && board.get_board(r_move, c_move).get_name() != board.get_empty().get_name())){
      board.set_board(r_move, c_move, board.get_board(r_current,c_current));
      board.set_board(r_current, c_current, board.get_empty());
      return true;
    }
    else{
      return false;
    }
  }
}

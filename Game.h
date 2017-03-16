#include "ChessBoard.h"


class Game{
public:
  void controller();
  bool legal_king_move(int r_current,int c_current,int r_move,int c_move);
  bool legal_queen_move(int r_current,int c_current,int r_move,int c_move);
  bool legal_rook_move(int r_current,int c_current,int r_move,int c_move);
  bool legal_bishop_move(int r_current,int c_current,int r_move,int c_move);
  bool legal_knight_move(int r_current,int c_current,int r_move,int c_move);
  bool legal_pawn_move(int r_current, int c_current, int r_move, int c_move);
  bool is_checkmate();
  bool is_check();
private:
  ChessBoard board;
};

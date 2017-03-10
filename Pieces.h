
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


class Pieces
{
public:
  bool legal_king_move(int, int c);
  bool legal_queen_move(int r, int c);
  bool legal_rook_move(int r, int c);
  bool legal_bishop_move(int r, int c);
  bool legal_knight_move(int r, int c);
  bool legal_pawn_move(int r, int c);
private:
};

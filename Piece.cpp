#include "Piece.h"

Piece::Piece(){

}
Piece::~Piece(){

}
string Piece::get_name(){
  return Name;
}
string Piece::get_team(){
  return Team;
}
void Piece::set_name(string name){
  Name = name;
}
void Piece::set_team(string team){
  Team = team;
}
void Piece::set_Next(Piece* next){
  Next = next;
}
Piece* Piece::get_Next(){
  return Next;
}
void Piece::print_piece_name(){
  cout<<Name;
}

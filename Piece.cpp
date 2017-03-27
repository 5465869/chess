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
int Piece::get_moved(){
  return Moved;
}
void Piece::set_name(string name){
  Name = name;
}
void Piece::set_team(string team){
  Team = team;
}
void Piece::set_moved(int moved){
  Moved = moved;
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

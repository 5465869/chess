#include "Team.h"

Team::Team(){

}
Team::~Team(){
  cout<<"destructor entered"<<endl;
  Piece *Temp;
  Temp = Head;
  while(Temp!=NULL){
    Head = Head->get_Next();
    delete Temp;
    Temp = Head;
  }
}
void Team::initialize_team(){
  Head = NULL;
  if(team_name == "white"){
    insert_piece("Pawn", team_name, 1,0);
    insert_piece("Pawn", team_name,1,1);
    insert_piece("Pawn", team_name,1,2);
    insert_piece("Pawn", team_name,1,3);
    insert_piece("Pawn", team_name,1,4);
    insert_piece("Pawn", team_name,1,5);
    insert_piece("Pawn", team_name,1,6);
    insert_piece("Pawn", team_name,1,7);
    insert_piece("Rook", team_name,0,0);
    insert_piece("Knight",team_name,0,1);
    insert_piece("Bishop", team_name,0,2);
    insert_piece("Queen", team_name,0,4);
    insert_piece("King", team_name,0,3);
    insert_piece("Bishop", team_name,0,5);
    insert_piece("Knight", team_name,0,6);
    insert_piece("Rook", team_name,0,7);
  }
  if(team_name == "black"){
    insert_piece("Pawn", team_name,6,0);
    insert_piece("Pawn", team_name,6,1);
    insert_piece("Pawn", team_name,6,2);
    insert_piece("Pawn", team_name,6,3);
    insert_piece("Pawn", team_name,6,4);
    insert_piece("Pawn", team_name,6,5);
    insert_piece("Pawn", team_name,6,6);
    insert_piece("Pawn", team_name,6,7);
    insert_piece("Rook", team_name,7,0);
    insert_piece("Knight",team_name,7,1);
    insert_piece("Bishop", team_name,7,2);
    insert_piece("Queen", team_name,7,4);
    insert_piece("King", team_name,7,3);
    insert_piece("Bishop", team_name,7,5);
    insert_piece("Knight", team_name,7,6);
    insert_piece("Rook", team_name,7,7);
  }
}
void Team::insert_piece(string name, string team_name, int row, int col){
  Piece *temp = new Piece();
  temp->set_name(name);
  temp->set_team(team_name);
  temp->set_Next(Head);
  temp->set_moved(0); // sets moved to 0
  temp->Location.set_row_col(row, col);
  Head = temp;
}
void Team::print_team(){
  Piece *Temp;
  Temp = Head;
  while(Temp != NULL){
    cout<<Temp->get_name()<<" "<<Temp->get_team()<<" ";
    Temp->Location.print();
    cout<<endl;
    Temp = Temp->get_Next();
  }
}
Piece* Team::get_Head(){
  return Head;
}
string Team::get_team_name(){
  return team_name;
}
void Team::set_team_name(string name){
  team_name = name;
}
void Team::delete_piece(int row, int col){
  Piece *temp = Head;
  Piece *prev = NULL;
  while((temp != NULL) && !(temp->Location.is_equal(row,col)))
  {
    prev = temp;
    temp = temp->get_Next();
  }
  if ((temp != NULL)&&(temp == Head))
  {
    Head = temp->get_Next();
    delete temp;
  }
  else if (temp != NULL)
  {
    prev->set_Next(temp->get_Next());
    delete temp;
  }
}
Piece Team::find_piece(string name){
  Piece * Temp = Head;
  while(Temp != NULL){
    if(Temp->get_name() == name){
      return *Temp;
    }
    Temp = Temp->get_Next();
  }
  return *Temp;
}

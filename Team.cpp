#include "Team.h"

Team::Team(){

}
Team::Team(string team){
  Head = NULL;
  if(team == "white"){
    insert_piece("Pawn", team, 1,0);
    insert_piece("Pawn", team,1,1);
    insert_piece("Pawn", team,1,2);
    insert_piece("Pawn", team,1,3);
    insert_piece("Pawn", team,1,4);
    insert_piece("Pawn", team,1,5);
    insert_piece("Pawn", team,1,6);
    insert_piece("Pawn", team,1,7);
    insert_piece("Rook", team,0,0);
    insert_piece("Knight",team,0,1);
    insert_piece("Bishop", team,0,2);
    insert_piece("King", team,0,3);
    insert_piece("Queen", team,0,4);
    insert_piece("Bishop", team,0,5);
    insert_piece("Knight", team,0,6);
    insert_piece("Rook", team,0,7);
  }
  if(team == "black"){
    insert_piece("Pawn", team,6,0);
    insert_piece("Pawn", team,6,1);
    insert_piece("Pawn", team,6,2);
    insert_piece("Pawn", team,6,3);
    insert_piece("Pawn", team,6,4);
    insert_piece("Pawn", team,6,5);
    insert_piece("Pawn", team,6,6);
    insert_piece("Pawn", team,6,7);
    insert_piece("Rook", team,7,0);
    insert_piece("Knight",team,7,1);
    insert_piece("Bishop", team,7,2);
    insert_piece("Queen", team,7,3);
    insert_piece("King", team,7,4);
    insert_piece("Bishop", team,7,5);
    insert_piece("Knight", team,7,6);
    insert_piece("Rook", team,7,7);
  }
}
Team::~Team(){
  cout<<"destructor entered"<<endl;
  Piece *Temp;
  Temp = Head;
  while(Temp!=NULL){
    Head = Head->get_Next();
    //delete Temp;
    Temp = Head;
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

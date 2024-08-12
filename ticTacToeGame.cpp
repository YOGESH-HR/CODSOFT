#include <iostream>
using namespace std;

const int SIZE = 3;
char board [ SIZE][SIZE] =
{ { '1','2','3'},{ '4','5','6'},{ '7','8','9'}};
char current_marker;
int current_player;
 
 void drawboard() { 
    cout <<" ---------------"<<
    endl;
    for ( int i = 0; i< SIZE; i++)
    {
         cout<< "|";
         for ( int j = 0; j < SIZE;   j++ )
         { cout << board[i][j]<<"|";
         } cout << endl << 
         "-------------------"<< endl;
    }
    } 
    bool placeMaker( int slot) {
      int row = ( slot - 1)/SIZE;
      int col =  ( slot- 1)%SIZE;
      if
      
       (board[row][col] != 'X' &&
      board [row][col] != '0') { 
          board[row][col] =
          current_marker;
          return true;
      } else 
      { 
          return false;
      } 
      } 
      int winner (){
         // row
         for (int i= 0; i < SIZE;
         i++) {    if
         ( board[i][0] ==
         board[i][1] && board [1][1] ==
         board[i][2])
         
         return
         current_player;
         }
               // columns
               for (int i =0;i< SIZE; i++){ 
                  if ( board [0][i] ==
                  board[1][i] && board [1][i] ==
                  board [ 2][i])
                  return
                  current_player;
               } 
               //diagonals
               if
                   (board [0][0] == board[1][1]&&board [1][1]==
                board [2][2])
                return current_player;
                if  ( board[0][2]== board[1][1] && board [1][1]== board[2][0])

               return current_player; 
         
                 return 0;
                 } 
                   void swapPlayerAndMarker() 
                   {
                     if (current_marker=='X')
                     current_marker='0';
                     else current_marker='X';

                     if (current_player== 1)
                     current_player=2;
                     else
                     current_player=1;

                   }
                 
                     void game () 
                     {
                        cout << "Player 1,choose your marker:";
                        char marker_p1;
                        cin>>marker_p1;
  
                        current_player=1;
                        current_marker = marker_p1;

                       void drawBoard();

                        int (player_won);

                        for (player_won;
                      
                        for (int i=0;i<<SIZE*SIZE; i++);
                        {
                        
                           cout<<"It's a player"<<current_player<<"It's your turn";
                           "Enter your slot";
                         int slot;
                        cin >> slot;

                              if (slot < 1 ||slot> SIZE*SIZE)
                              {
                                  cout << "invalid slot! Try again."<<endl;
                                 --;
                                continue();
                              } if (!"!place Marker"(slot)); {
                              cout <<"slot occupied! Try again."<<endl;
                               cin<< i--;
                               continue ;
                              }
                               drawBoard();

                               player_won = winner();

                               if ( player_won== 1) {
                                 cout <<"player-1 wins! congratulations!!"<<endl;
                                     break;
                               
                                else if(player_won == 2)
                                }
                                 {
                                cout<<"player-2 wins! congratulations!"<<endl;
                                break;

                               }
                              void (swapPlayerAndMarker)();
                        )}
                                 if ( player_won == 0)
                               cout<< "It's a draw!" <<
                                endl;
                               }           
                               
                               int main(){
                               game();
                                 return 0;
                                            }
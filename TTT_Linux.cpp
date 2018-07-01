#include<iostream>
//#include<conio.h>
#include<cstdlib>

using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int check()
{
 if(square[1]==square[2] && square[2]==square[3])
 {
  return 1;
 }
 else if(square[4] == square[5] && square[5] == square[6])
 {
  return 1;
 }
 else if(square[7]==square[8] && square[8]==square[9])
 {
  return 1;
 }
 else if(square[2]==square[5] && square[5]==square[8])
 {
  return 1;
 }
 else if(square[1]==square[4] && square[4]==square[7])
 {
  return 1;
 }
 else if(square[3]==square[6] && square[6]==square[9])
 {
  return 1;
 }
 else if(square[1]==square[5] && square[5]==square[9])
 {
  return 1;
 }
 else if(square[3]==square[5] && square[5]==square[7])
 {
  return 1;
 }
 else if(square[1]!='1'&& square[2]!='2' && square[3]!='3'&& square[4]!='4'&& square[5]!='5' && square[6]!='6'&& square[7]!='7'&& square[8]!='8' && square[9]!='9')
 {
  return 0;
 }
 else
 {
  return 10;
 }
}
void board()
{
// clrscr();
 system("clear");
 cout<<"    TIC TAC TOE     "<<endl;
 cout<<"Player 1(X)  vs  Player 2(0)"<<endl<<endl<<endl;
 cout<<"       |       |        "<<endl;
 cout<<"   "<< square[1] <<"   |   "<<square[2]<<"   |    "<<square[3]<<endl;
 cout<<"_ _ _ _|_ _ _ _|_ _ _ _"<<endl;
 cout<<"       |       |        "<<endl;
 cout<<"   "<< square[4] <<"   |   "<<square[5]<<"   |    "<<square[6]<<endl;
 cout<<"_ _ _ _|_ _ _ _|_ _ _ _"<<endl;
 cout<<"       |       |        "<<endl;
 cout<<"   "<< square[7] <<"   |   "<<square[8]<<"   |    "<<square[9]<<endl;
 cout<<"       |       |        "<<endl<<endl;
}
int main()
{
 int player=1,i,choice;
 char XO;
 //clrscr();
 system("clear");
 do
 {
  board();
  player=(player%2)?1:2;
  XO=(player==1)? 'X' : 'O';
  cout<<"Player "<<player<<" Enter the number where you want to place "<<XO<<"  ";
  cin>>choice;
  if(choice==1 && square[1]=='1')
  {
   square[1]=XO;
  }
  else if(choice==2 && square[2]=='2')
  {
   square[2]=XO;
  }
  else if(choice==3 && square[3]=='3')
  {
   square[3]=XO;
  }
  else if(choice==4 && square[4]=='4')
  {
   square[4]=XO;
  }
  else if(choice==5 && square[5]=='5')
  {
   square[5]=XO;
  }
  else if(choice==6 && square[6]=='6')
  {
   square[6]=XO;
  }
  else if(choice==7 && square[7]=='7')
  {
   square[7]=XO;
  }
  else if(choice==8 && square[8]=='8')
  {
   square[8]=XO;
  }
  else if(choice==9 && square[9]=='9')
  {
   square[9]=XO;
  }
  else
  {
   cout<<" Invalid Move ";
   player--;
//   getch();
  }
  i=check();
  player++;
 }while(i==10);
 board();
 if(i==1)
 {
  cout<<"  \nPlayer "<<--player<<" wins "<<endl;
 }
 else
 {
  cout<<"  \nGame Draw  "<<endl;
 }
 cout<<"Thanks for playing :)"<<endl<<"This is the first Project by Ritik Mittal";
// getch();
}

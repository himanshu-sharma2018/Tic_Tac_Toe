/***************************************************************
__author__ = Himanshu Sharma
__email__  = himanshusharma2972@gmail.com
__Github__ = https://github.com/himanshuthecoder

About program:- This is a simple Tic Tac Toe Game 
				written in c++ for practice purpose
				
			*if you are window user 
			 then change the clearbackground variable to cls 

****************************************************************/


#include<iostream>
#include <stdlib.h>


using namespace std;

/* this function will check the winning condition*/
void win(char p[10]);


//this is for stopping the loop once a player is win
int che=0; 

const char* clearbackground="clear";  //terminal (clear=linux|cls=window) 


//main method start
int main()
{	
	//goto statement when user wants to play again then it will be used to start the program again
	start:  
	
	system(clearbackground);  //for clear terminal screen
	

	//this array will check the user response while playing 	
	char p[10]={'.','.','.','.','.','.','.','.','.','.'};

	int userChoice;	 //user choice to mark in block
	int i=0;	     //starting loop
	int restart;     //restart game	
	 
		 //instruction
		 cout<<"\nPlayer 1 symbol: 'O'  and Player 2 symbol: 'X' \n\n"<<endl;	
		 cout<<"\t\t\t\tInstruction to play"<<endl;
		 cout<<"*****************************************************************************"<<endl;
		 cout<<"When your turn comes enter the block no. in which you want to place your symbol."<<endl;
		 cout<<"\n\n\n";

	 	//creating board to play
		while(i<=10)	
		 {
		 		cout<<"\t  1|  2|  3"<<endl;
		 		cout<<"\t   |   |   "<<endl;
		 		cout<<"\t "<<p[1]<<" |"<<" "<<p[2]<<" |"<<" "<<p[3]<<endl;
		 		cout<<"\t------------"<<endl;
		 		cout<<"\t  4|  5|  6"<<endl;
		 		cout<<"\t   |   |   "<<endl;
		 		cout<<"\t "<<p[4]<<" |"<<" "<<p[5]<<" |"<<" "<<p[6]<<endl;
		 		cout<<"\t------------"<<endl;
		 		cout<<"\t  7|  8|  9"<<endl;
		 		cout<<"\t   |   |   "<<endl;
		 		cout<<"\t "<<p[7]<<" |"<<" "<<p[8]<<" |"<<" "<<p[9]<<endl;
		 		
				// winning condition checks
				 win(p);
		 		if(che==1)
				 break;
				//end 
				 
		 	
				
			 if(i<=9)
		 		{
				 
					if(i%2==0 )
			 		{
					 	in:
							cout<<"\n enter choice :player 2 = "<<endl;
				 			cin>>userChoice;
				 			if(p[userChoice]!='.')
				 			{
				 				cout<<"\nPlease Enter blank box don't be oversmart";	
								goto in;
							}
							else
				 			p[userChoice]='X';
			 		}
			 		else
			 		{	in2:
							cout<<"\n enter choice :player 1 = "<<endl;
				 			cin>>userChoice;
							 if(p[userChoice]!='.')
				 			{
				 				cout<<"\nPlease Enter blank box don't be oversmart";	
								goto in2;
							}
							else					 
				 			p[userChoice]='O';
			 			
					 }
				}
			i++;
			system("clearbackground"); //for clear terminal screen
			
		 }
		
		//ending of game		
		cout<<"\n Thanks for playing"<<endl;
		cout<<"\nFor Play again enter 1 and for Exit enter 2"<<endl;
		cin>>restart;
		 if(restart==1)
		 {	che=0;
		 	goto start;	//for restarting game
			
		 }
		 
	return(0);

}


//this function will check the win condition of user
void win(char p[10] )
{	
		//(1,2,3)(4,5,6)
		if(p[1]==p[2] && p[2]==p[3] && (p[2]=='O'|| p[2]=='X') || (p[4]==p[5] && p[5]==p[6] && (p[6]=='O'|| p[6]=='X')) )
			{	if(p[2]=='X' || p[6]=='X')
				{
				cout<<"Congrats\n player 2 is winner ";
				che=1;
				}
				else
				{
				cout<<"congrats \n player 1 is winner ";
				che=1;
				}
			}
		
		//(7,8,9)  (1,5,9)
		if(p[7]==p[8] && p[8]==p[9] && (p[9]=='O'|| p[9]=='X') || (p[1]==p[5] && p[5]==p[9] && (p[5]=='O'|| p[5]=='X')) )
			{	if(p[9]=='X' || p[5]=='X')
				{
				cout<<"Congrats\n player 2 is winner ";
				che=1;
				}
				else
				{
					cout<<"congrats \n player 1 is winner ";
				che=1;
				}
				
			}

		//(1,4,7)(2,5,8)	
		if(p[1]==p[4] && p[4]==p[7] && (p[7]=='O'|| p[7]=='X') || (p[2]==p[5] && p[5]==p[8] && (p[8]=='O'|| p[8]=='X')) )
			{	if(p[7]=='X' || p[8]=='X')
				{
				cout<<"Congrats\n player 2 is winner ";
				che=1;
				}
				else
				{
				cout<<"congrats \n player 1 is winner ";
				che=1;
				}
			}
		
		//(3,5,7) (3,6,9)
		if(p[3]==p[5] && p[5]==p[7] && (p[5]=='O'|| p[5]=='X' ) || p[3]==p[6] && p[6]==p[9] && (p[9]=='O'|| p[9]=='X') )
			{	if(p[9]=='X'|| p[5]=='X')
				{
				cout<<"Congrats\n player 2 is winner ";
				che=1;
				}
				else
				{
				cout<<"congrats \n player 1 is winner ";
				che=1;
				}
			}				
		
	
}


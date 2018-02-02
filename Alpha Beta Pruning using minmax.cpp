	/* Tic Tac Toe Implemented using Minmax Algorithm
	   by optimizing the search by Alpha-Beta Pruning 
	*/
	// Header file   
	#include<bits/stdc++.h>
	using namespace std;
    
    const char human ='X';
    const char ab = 'O';
    
    // Combining the no of player use enum union
    enum player {HUMAN,com};
    
    struct Move
    {
    	//Cordinates
    	int x;
    	int y;
	};
	
	class game
	{
		 char  board[3][3];
		 
		 public: 
		 game();
		 
		 // Print the board
		 void printBoard();
	     
	     // Check game status
	     bool gameover();
	     
	     // This part is used to play the game 
	     // and the function according the
	     // status of game whether it is computer or input by user
	     
	     bool checkab(player p);
	     void play();
	     
	     //Get the optimal moves by the user
		 // according to the cordinates of 
		 // 3*3 matrix 
	     void getmoves();
	     
	     // Function to score game board
		 // it is used to check optimal moves
		 // according to add the alpha ans beta  
	     int score();
	     
	     // Returns the cordinated by the computer 
	     // to be taken by applying alpha and beta 
	     // pruning 
	     Move  minimax(char abBoard[3][3]);
	     
	     // Min nodes taking the minimum value of 
	     // two nodes by intializing the 
	     // alpha to -infinite and 
	     // beta to + infine
	     int minsearch(char abBoard[3][3]);
	     
	     // Searches for the max value of 
	     // two nodes 
	     int maxsearch(char abBoard[3][3]);
	};
	
	game::game()
	{
		for(int i =0 ;i< 3; i++)
		      for(int j=0;j<3;j++) 
		          board[i][j] = '-';
	}
	
    void game:: printBoard()
	{
	
	  cout << "     |     |     " << endl;
		      cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
		
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " << board[1][0]<< "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
		  
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " << board[2][0] << "  |  " <<  board[2][1] << "  |  " << board[2][2] << endl;
		
		      cout << "     |     |     " << endl << endl;
	   
	}
	
	bool game:: gameover()
	{
		if(checkab(HUMAN)) return true;
		if(checkab(com)) return true;
		
		bool check = false;
		for(int
		 i =0;i<3; i++)
		{
			if(board[i][0] == '-'|| board[i][1]== '-' || board[i][2]=='-')
			check =true;
		}
		return !check;
		
	}
	
	bool game::checkab(player p)
	{
		char var;
	    if(p == HUMAN) var = human;
		else var = ab;
		
		for(int i=0;i<3;i++)
		{   
		   // checking each row 
		   // if the ever row value is same 
		  // it will return true;
		  // result to win or lose
		   if(board[i][0]==var && board[i][1] == var  &&
		     board[i][2] == var)
		     return true;
		    // check each columns    
		    if(board[0][i] == var && board[1][i] == var 
			 && board[2][i]== var)
			 return true;
		} 
		// vertical checking 
        if(board[0][0] == var && board[1][1] == var 
		&& board[2][2] == var)
		{
		return true;
	    }
		
		if(board[0][2] == var && board[1][1]==var
		&& board[2][0] == var)
		{
	     return true;
	     }
		 
		return false; 		
   	}
   	
   	int game::score ()
   	{
   	// Adding the +10 to human
   	/// by making it maximizer that is 
   	 // alpha and -10 to beta making it 
   	 // minimizer 
   	  if(checkab(HUMAN)) return 10;
	  else if(checkab(com))	 return -10;
	  return 0;
    }
	
	Move game::minimax(char abBoard[3][3])
	{
		// this is the algo 
		// part in which we implemented 
		// apply the minmax algo 
		int bestmovescore = 100;
		Move bestmove; 
		
		for(int i =0 ;i<3 ;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(abBoard[i][j] == '-')
				{
					//cout<<"Enter \n";
					abBoard[i][j] =ab;
					int tempmovescore = maxsearch(abBoard);
					if(tempmovescore<=bestmovescore)
					{
						bestmovescore = tempmovescore;
						bestmove.x = i;
						bestmove.y = j;
					}
					abBoard[i][j]='-';
				}
			}
		}
		return bestmove;
	}
	
	int game::maxsearch(char abBoard[3][3]) 
	{
		if(gameover()) return score();
		Move bestMove;
					
		int bestMoveScore = -1000;
		for(int i = 0; i < 3; i++) 
		{
			for(int j = 0; j < 3; j++) 
			{
				if(abBoard[i][j] == '-') 
				{
					abBoard[i][j] = human;
					int tempMoveScore = minsearch(abBoard);
					if(tempMoveScore >= bestMoveScore) 
					{
						bestMoveScore = tempMoveScore;
						bestMove.x = i;
						bestMove.y = j;
					}
					abBoard[i][j] = '-';
				}
			}
		}
					
	return bestMoveScore;
    }
    
    int game::minsearch(char abBoard[3][3])
	{
		if(gameover()) return score();
		Move bestMove;
					
		int bestMoveScore = 1000; 
		for(int i = 0; i < 3; i++) 
		{
			for(int j = 0; j < 3; j++) 
			{
				if(abBoard[i][j] == '-')
				{
				abBoard[i][j] = ab;
				int tempMove = maxsearch(abBoard);
				if(tempMove <= bestMoveScore) 
				{
					bestMoveScore = tempMove;
					bestMove.x = i;
					bestMove.y = j;
				}
				abBoard[i][j] = '-';
				}
			}
		}
				
	return bestMoveScore;
	}
				
	void game::getmoves()
	{
	
		pair<int,int> p[9];
		int x,y;
		int k=1;
		for(int i =1;i<=3;i++)
		{
			for(int j=1;j<=3;j++)
			{
				p[k].first = i-1;
				p[k].second = j-1;
				k++;
			}
	    }
			
			cout<<"Enter your move!\n"; 
			bool flag = true;
			while(flag)
			{  
			int t;
			cin>>t;
		    //getline(cin,restofline);
		    if((t>=1 &&t<=9))
		    {
		    	x = p[t].first;
		        y = p[t].second;
		    	if(board[x][y] == '-')
		    	{
		    		
			    board[x][y] = human;
			    break;
			    }
			    else 
			    cout<<"OOps ! Invalid Move\n";
		    }
		    if(t>=10)
			{
		     cout<<"Invalid Move\n";
		     cout<<"Enter the correct move\n";
		    }
	        }
	    }
	
	void game::play()
	{
		
		cout<<"  TIC TAC TOE  \n";
		cout<<"Used Alpha Beta Pruning to optimize the search Query Using Minmax algorithm\n";
		cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
		      cout << endl;
		// Implemented AI (Alpha Beta Pruning)\n"
		cout<<"Enter 1 or 2 or 3 or 4 or 5 or 6 or 7 or 8 or 9  \n";
		cout << "     |     |     " << endl;
		      cout << "  " << "1" << "  |  " << "2" << "  |  " <<"3" << endl;
		
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " <<"4"<< "  |  " << "5"<< "  |  " << "6" << endl;
		  
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " << "7" << "  |  " << "8"<< "  |  " << "9" << endl;
		
		      cout << "     |     |     " << endl << endl;
	   
		cout<<endl;
		int turn =0;
		//printBoard();
		while(!checkab(HUMAN) && !checkab(com) && !gameover())
		{
			// input move
			if(turn%2 == 0)
			{
				getmoves();
				if(checkab(HUMAN))
				cout<<" Human Player Wins! Yup!\n";
				turn++;
				printBoard();
			}
			else
			{
				cout<<endl;
				cout<<" Artificial Intelligence  Turn! "<<endl;
			    Move commove = minimax(board);
			    board[commove.x][commove.y]= ab;
			    if(checkab(com))
			    cout<<" Artificial Intelligence  Wins "<<endl;
			    turn++;
			    printBoard();
			    
			}
		}
		    int count =0;
	        for(int i=0;i<3;i++)
	        {
	        	for(int j=0;j<3;j++)
	        	{
	        		if(board[i][j] !='-')
	        		{
	        			count++;
					}
				}
			}
			if(count ==9)
		    {
		    	cout<<"OOps! Game Over this is Tie \n";
		    }
	}
	
	int main()
	{
		
		game obj; // object;
		obj.play();
		return 0;
	}

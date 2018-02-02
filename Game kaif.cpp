		#include<bits/stdc++.h>
		using namespace std;
		#include <iostream>
		#include <conio.h>
		
		using namespace std;
		
		int checkwin( char[]);
		void board( char[]);
		int f=0;
		int main()
		{
			char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
		      int player = 1,i,choice;
		 
		      char mark;
		      do
		      {
		          board(square);
		
		           if(player%2==1)
		           player=1;
		           else
		           player=2;
		           if(player==2)
		           {
		           	cout << "Players  " << player<<endl;
		            cout<<"Press Enter for CPU"<<endl;
		            if (square[1] == square[2] && square[1] =='O'&&square[3]=='3')
		            {
		            	cout<<"cpu wins by moving 3"<<endl;
		            	return 0;
					}
					if (square[2] == square[3] && square[2] =='O'&&square[1]=='1')
		            {
		            	cout<<"cpu wins by moving 1"<<endl;
		            	return 0;
					}
					if (square[1] == square[3] && square[1] =='O'&&square[2]=='2')
		            {
		            	cout<<"cpu wins by moving 2"<<endl;
		            	return 0;
					}
					
				
		
		       if (square[4] == square[5] && square[4] == 'O'&&square[6]=='6')
		       {
		       	cout<<"cpu wins by moving 6"<<endl;
		            	return 0;
			   }
		      if (square[4] == square[6] && square[4] == 'O'&&square[5]=='5')
		       {
		       	cout<<"cpu wins by moving 5"<<endl;
		            	return 0;
			   }
			    if (square[6] == square[5] && square[6] == 'O'&&square[4]=='4')
		       {
		       	cout<<"cpu wins by moving 4"<<endl;
		            	return 0;
			   }
		      
		      //else if (square[7] == square[8] && square[8] == square[9])
		
		 if (square[7] == square[8] && square[7] =='O'&&square[9]=='9')
		            {
		            	cout<<"cpu wins by moving 9"<<endl;
		            	return 0;
					}
					if (square[7] == square[9] && square[7] =='O'&&square[8]=='8')
		            {
		            	cout<<"cpu wins by moving 8"<<endl;
		            	return 0;
					}
					if (square[8] == square[9] && square[8] =='O'&&square[7]=='7')
		            {
		            	cout<<"cpu wins by moving 7"<<endl;
		            	return 0;
					}
		      //else if (square[1] == square[4] && square[4] == square[7])
			if (square[1] == square[4] && square[1] =='O'&&square[7]=='7')
		            {
		            	cout<<"cpu wins by moving 7"<<endl;
		            return 0;
					}
					if (square[1] == square[7] && square[1] =='O'&&square[4]=='4')
		            {
		            	cout<<"cpu wins by moving 4"<<endl;
		            	return 0;
					}
					if (square[4] == square[7] && square[4] =='O'&&square[1]=='1')
		            {
		            	cout<<"cpu wins by moving 1"<<endl;
		            	return 0;
					}
		      
		      //else if (square[2] == square[5] && square[5] == square[8])
		
		  if (square[5] == square[8] && square[5] =='O'&&square[2]=='2')
		            {
		            	cout<<"cpu wins by moving 2"<<endl;
		            	return 0;
					}
					if (square[2] == square[8] && square[2] =='O'&&square[5]=='5')
		            {
		            cout<<"cpu wins by moving 5"<<endl;
		            return 0;
					}
					if (square[2] == square[5] && square[2] =='O'&&square[8]=='8')
		            {
		            	cout<<"cpu wins by moving 8"<<endl;
		            	return 0;
					}
		      //else if (square[3] == square[6] && square[6] == square[9])
		 if (square[6] == square[9] && square[6] =='O'&&square[3]=='3')
		            {
		            	cout<<"cpu wins by moving 3"<<endl;
		            	return 0;
					}
					if (square[3] == square[9] && square[3] =='O'&&square[6]=='6')
		            {
		            	cout<<"cpu wins by moving 6"<<endl;
		            	return 0;
					}
					if (square[3] == square[6] && square[3] =='O'&&square[9]=='9')
		            {
		            	cout<<"cpu wins by moving 9"<<endl;
		            	return 0;
					}
		     // else if (square[1] == square[5] && square[5] == square[9])
		if (square[5] == square[9] && square[5] =='O'&&square[1]=='1')
		            {
		            	cout<<"cpu wins by moving 1"<<endl;
		            	return 0;
					}
					if (square[1] == square[9] && square[1] =='O'&&square[5]=='5')
		            {
		            	cout<<"cpu wins by moving 5"<<endl;
		            return 0;
					}
					if (square[5] == square[9] && square[5] =='O'&&square[9]=='9')
		            {
		            	cout<<"cpu wins by moving 9"<<endl;
		            return 0;
					}
		      //else if (square[3] == square[5] && square[5] == square[7])
		if (square[5]== square[7] && square[5] =='O'&&square[3]=='3')
		            {
		            	cout<<"cpu wins by moving 3"<<endl;
		            	return 0;
					}
					if (square[3] == square[7] && square[3] =='O'&&square[5]=='5')
		            {
		            	cout<<"cpu wins by moving 5"<<endl;
		            	return 0;
					}
					if (square[3] == square[5] && square[3] =='O'&&square[7]=='7')
		            {
		            	cout<<"cpu wins by moving 7"<<endl;
		            	return 0;
					}
					
					//cpu does not want to lose
					if (square[1] == square[2] && square[1] =='X'&&square[3]=='3')
		            {
		            	square[3]='O';
		            	f=1;
					}
					if (square[2] == square[3] && square[2] =='X'&&square[1]=='1')
		            {
		            	square[1]='O';
		            	f=1;
					}
					if (square[1] == square[3] && square[1] =='X'&&square[2]=='2')
		            {
		            		square[2]='O';
		            	f=1;
					}
					
				
		
		       if (square[4] == square[5] && square[4] == 'X'&&square[6]=='6')
		       {
		       		square[6]='O';
		            	f=1;
			   }
		      if (square[4] == square[6] && square[4] == 'X'&&square[5]=='5')
		       {
		       		square[5]='O';
		            	f=1;
			   }
			    if (square[6] == square[5] && square[6] == 'X'&&square[4]=='4')
		       {
		       		square[4]='O';
		            	f=1;
			   }
		      
		      //else if (square[7] == square[8] && square[8] == square[9])
		
		 if (square[7] == square[8] && square[7] =='X'&&square[9]=='9')
		            {
		            		square[9]='O';
		            	f=1;
					}
					if (square[7] == square[9] && square[7] =='X'&&square[8]=='8')
		            {
		            	square[8]='O';
		            	f=1;
					}
					if (square[8] == square[9] && square[8] =='X'&&square[7]=='7')
		            {
		            	square[7]='O';
		            	f=1;
					}
		      //else if (square[1] == square[4] && square[4] == square[7])
			if (square[1] == square[4] && square[1] =='X'&&square[7]=='7')
		            {
		            	square[7]='O';
		            	f=1;
					}
					if (square[1] == square[7] && square[1] =='X'&&square[4]=='4')
		            {
		            square[4]='O';
		            	f=1;
					}
					if (square[4] == square[7] && square[4] =='X'&&square[1]=='1')
		            {
		            	square[1]='O';
		            	f=1;
					}
		      
		      //else if (square[2] == square[5] && square[5] == square[8])
		
		  if (square[5] == square[8] && square[5] =='X'&&square[2]=='2')
		            {
		            	square[2]='O';
		            	f=1;
					}
					if (square[2] == square[8] && square[2] =='X'&&square[5]=='5')
		            {
		            square[5]='O';
		            	f=1;
					}
					if (square[2] == square[5] && square[2] =='X'&&square[8]=='8')
		            {
		            	square[8]='O';
		            	f=1;
					}
		      //else if (square[3] == square[6] && square[6] == square[9])
		        if (square[6] == square[9] && square[6] =='X'&&square[3]=='3')
		            {
		            	square[3]='O';
		            	f=1;
					}
					if (square[3] == square[9] && square[3] =='X'&&square[6]=='6')
		            {
		            	square[6]='O';
		            	f=1;
					}
					if (square[3] == square[6] && square[3] =='X'&&square[9]=='9')
		            {
		            	square[9]='O';
		            	f=1;
					}
		     // else if (square[1] == square[5] && square[5] == square[9])
		if (square[5] == square[9] && square[5] =='X'&&square[1]=='1')
		            {
		            	square[1]='O';
		            	f=1;
					}
					if (square[1] == square[9] && square[1] =='X'&&square[5]=='5')
		            {
		            	square[5]='O';
		            	f=1;
					}
					if (square[5] == square[9] && square[5] =='X'&&square[9]=='9')
		            {
		            	square[9]='O';
		            	f=1;
					}
		      //else if (square[3] == square[5] && square[5] == square[7])
		if (square[5]== square[7] && square[5] =='X'&&square[3]=='3')
		            {
		            	square[3]='O';
		            	f=1;
					}
					if (square[3] == square[7] && square[3] =='X'&&square[5]=='5')
		            {
		            	square[5]='O';
		            	f=1;
					}
					if (square[3] == square[5] && square[3] =='X'&&square[7]=='7')
		            {
		            	square[7]='O';
		            	f=1;
					}
					
					//ending
					if(f==0)
					{ 
		            choice=rand()%9;
		            mark='O';
		            int turn=1;
		            int placed=0;
		            
		            while(placed==0)
		            {
		            	if (choice == 1 && square[1] == '1')
		            	{
		            		square[1] = mark;
		                         placed=1;
		            	}
		            	else if (choice == 2 && square[2] == '2')
		            	{
		            		square[2] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 3 && square[3] == '3')
		            	{
		            		square[3] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 4 && square[4] == '4')
		            	{
		            		placed=1;
		                        square[4] = mark;
		            	}
		            	else if (choice == 5 && square[5] == '5')
		            	{
		            		square[5] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 6 && square[6] == '6')
		            	{
		            		square[6] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 7 && square[7] == '7')
		            	{
		            		square[7] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 8 && square[8] == '8')
		            	{
		            		square[8] = mark;
		                        placed=1;
		            	}
		            	else if (choice == 9 && square[9] == '9')
		            	{
		            		square[9] = mark;
		                        placed=1;
		            	}
		            	else
		            		choice=rand()%9;
		            	
		            }
		        }
		            i=checkwin(square);
		            player++;
		            _getche();
		            board(square);
		           }
		       
		           else if(player==1)
		           {
		           	cout << "Players  " << player << ", enter a number:  ";
		            cin >> choice;
		            mark='X';
		            f=0;
		            if (choice == 1 && square[1] == '1')
		
		           square[1] = mark;
		           else if (choice == 2 && square[2] == '2')
		
		           square[2] = mark;
		           else if (choice == 3 && square[3] == '3')
		
		           square[3] = mark;
		           else if (choice == 4 && square[4] == '4')
		
		           square[4] = mark;
		           else if (choice == 5 && square[5] == '5')
		
		           square[5] = mark;
		           else if (choice == 6 && square[6] == '6')
		
		           square[6] = mark;
		           else if (choice == 7 && square[7] == '7')
		
		           square[7] = mark;
		           else if (choice == 8 && square[8] == '8')
		
		           square[8] = mark;
		           else if (choice == 9 && square[9] == '9')
		
		           square[9] = mark;
		           else
		           {
		           	cout<<"Invalid move ";
		
		           player--;
		          _getche();
		           } 
		           
		           i=checkwin(square);
		
		           player++;
		           }
		      }
			   while(i==-1);
		           board(square);
		          if(i==1)
			
		         cout<<"Congratulation! \nPlayer "<<--player<<" win ";
		          else
		          cout<<"  OOps!\nGame draw";
		
		         _getche();
		}
		void board(char square[])
		{
			system("cls");
		      cout << "\n\n\tTic Tac Toe\n\n";
		
		      cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
		      cout << endl;
		
		      cout << "     |     |     " << endl;
		      cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
		
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
		  
		      cout << "_____|_____|_____" << endl;
		      cout << "     |     |     " << endl;
		
		      cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
		
		      cout << "     |     |     " << endl << endl;
		}
		int checkwin(char square[])
		{
			if (square[1] == square[2] && square[2] == square[3]) return 1;
		      else if (square[4] == square[5] && square[5] == square[6])
		
		      return 1;
		      else if (square[7] == square[8] && square[8] == square[9])
		
		      return 1;
		      else if (square[1] == square[4] && square[4] == square[7])
		
		      return 1;
		      else if (square[2] == square[5] && square[5] == square[8])
		
		      return 1;
		      else if (square[3] == square[6] && square[6] == square[9])
		 
		      return 1;
		      else if (square[1] == square[5] && square[5] == square[9])
		
		      return 1;
		      else if (square[3] == square[5] && square[5] == square[7])
		
		      return 1; 
		      else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
		      && square[4] != '4' && square[5] != '5' && square[6] != '6' 
		      && square[7] != '7' && square[8] != '8' && square[9] != '9')
		
		      return 0;
		      else
		      return -1;
		  }


#include <time.h>       /* time */
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stack>
using namespace std;
#define size 11
// we choose only odd number of cells .movement is only from odd cell to valid another odd cell i.e jumping odd cells
/* every cell in maze or say grid has has a top wall ,bottom wall .right wall and left wall .WE Remove the walls between the current cell and the chosen cell when needed ,as explained in the algorithm on wikipedia
*/



 int r,c;
int finalX,finalY;
struct cell{
bool visited;
bool topwall;
bool bottomwall;
bool leftwall;
bool rightwall;
char value;// initially the entire grid is just *

};
//all functions declared 
void initiliaze(cell maze[][size]);
void display( cell maze[][size]);
void generateprogram (cell maze[][size]);
void clearscreen();
int sizeofrow,sizeofcol;
cell maze[size][size] ;
int total = 0;// total number of cells we have in grid,intially 0
void initiliaze(cell maze[][size]){
    // initially all the cells of the grid will have all their top,bottom,right,left walls marked true and visited marked false exceptfor cells  from cells from which we can't move 2 steps up,dowm,right,left as doing this takes us out of grid 
   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        maze[i][j].bottomwall=true;
        maze[i][j].leftwall=true;
        maze[i][j].rightwall=true;
        maze[i][j].topwall=true;
        maze[i][j].visited=false;
        maze[i][j].value='*';

    }
   }
   // positions in grid where we can't move ,
   for(int i=1;i<size;i++){
    for(int j=1;j<size;j++){
       maze[1][j].topwall=false;// from these cells we can't move up as we will be out of the grid so top wall is marked false
       maze[j][1].leftwall=false;// we can't take a two step leftward from these cells as we will be out of the grid
       maze [size-2][j].bottomwall=false;//can't move downward 2 steps from these cells
       maze [i][size-2].rightwall=false;// can't move rightward if we take 2 steps
       }
   }
}
void display( cell maze[][size]){
for(int i=0;i<size;i++){
        cout<<endl;// move to next line
    for(int j=0;j<size;j++){
        cout<<" "<<maze[i][j].value;// all the values of one row is first printed , we move to next line and then same continues
    }
}
}
void clearscreen()    // define the clearscreen function
{
HANDLE hOut;  // declare a HANDLE object
COORD Position;   // declare a COORD object

hOut = GetStdHandle(STD_OUTPUT_HANDLE);  // call the GetStdHandle function
                                         // and assign return value to hOut  (your HANDLE object)

// Assign the X and Y coordinates of your COORD object
Position.X = 0;
Position.Y = 0;
SetConsoleCursorPosition(hOut, Position);  // Call the SetConsoleCursorPosition function
}

void generateprogram (cell maze[][size]){
// we start from odd positions in grid and only move from one odd to other odd positions in grid so we first generate an odd position (row,column)
// 2 * rand() + 1 is always an odd integer and if we do odd no %10 , we get just 1 3 5 7 9 i.e random odd numbers in range
srand (time(NULL));
int r1=((2*rand())+1)%(size-1);// random odd starting row
int c1=((2*rand())+1)%(size-1);// random odd starting cell
maze[r1][c1].visited=true;// starting cell is marked true
maze[r1][c1].value='S';// the starting random cell will appear as S on screen
int countvisited=0;// no of cells visited
countvisited++;// because of the first randoms starting  cell

r=r1;c=c1;// r and c stores random starting cell 's x coordinate and y coordinate 
stack <int> X;stack <int> Y;// two stacks for storing x and y coordinates for backtracjing part
while(countvisited<total){
        // If the current cell has any neighbours which have not been visited
        // if we are (r,c) ,we check if the cell at (r-2,c) is visited or not .if not visited and at same time , the top wall of (r,c) is true and bottom wall of (r-2,c) is true
        // we can easily move up by 2 units  .We do the same for all such (r,c) and check if any of four option is there
        if((maze[r-2][c].visited==false && maze[r][c].topwall==true && maze[r-2][c].bottomwall==true)||
           (maze[r][c+2].visited==false && maze[r][c].rightwall==true && maze[r][c+2].leftwall==true)||
           (maze[r][c-2].visited==false && maze[r][c].leftwall==true && maze[r][c-2].rightwall==true)||
           (maze[r+2][c].visited=false && maze[r][c].bottomwall==true && maze[r+2][c].topwall==true)){
           // Choose randomly one of the unvisited neighbours
           int random_number=(rand()%4)+1;// generates a random number between 1 and 4 (+1 ensures till 4)

           if(random_number==1 && r+2<=size-1)// go two units down
           {
               if(maze[r+2][c].visited==false){// if  (r,c) is current cell ,check(r+2,c) and if it is not visited ,we can jump there
                maze[r+2][c].visited=true;// mark (r+2,c) as visited
                maze[r+2][c].value=' ';// * at (r+2,c) is changed to space
                maze[r+2][c].topwall=false;// remove the top wall of destination cell
                maze[r+1][c].value=' ';// * at cell in between the the current and destination cell is made white
                maze[r+1][c].visited=true;//mark (r+1,c) as visited
                maze[r][c].bottomwall=false;// current cell's bottom wall is removed
                X.push(r);Y.push(c);
                r=r+2;
                countvisited++;
               }
               else
                continue;

           }
           if(random_number==2 && c+2<=size-1)// go right
           {
               if(maze[r][c+2].visited==false){
                maze[r][c+2].visited=true;// destination cell (r,c+2) marked visited
                maze[r][c+2].value=' ';// destination cell changed from * to space 
                maze[r][c+2].leftwall=false;// remove the left wall of (r,c+2)
                maze[r][c+1].value=' ';// the cell between (r,c) and (r,c+2) is made white
                maze[r][c+1].visited=true;// cell between current and destination cell marked true
                maze[r][c].rightwall=false;// remove the right wall of (r,c)
                X.push(r);Y.push(c);// push the r and c into stack as they are the current cell
                c=c+2;
                countvisited++;


               }
               else
                continue;

           }
           if(random_number==3 && c-2>=0){// go left
            if(maze[r][c-2].visited==false){// if destination cell (r,c-2) is not visited
                maze[r][c-2].visited=true;// mark destination cell (r,c-2) visited 
                maze[r][c-2].rightwall=false;// remove the rightwall of destination cell (r,c-2)
                maze[r][c-2].value=' ';// at destination cell ,* is changed to space 
                maze[r][c-1].visited=true;// cell between current and 
                maze[r][c-1].value=' ';
                maze[r][c].leftwall=false;
                X.push(r);Y.push(c);// push the r and c into stack as they are the current cell
                c=c-2;
                countvisited++;
            }
            else
                continue;
           }
           if(random_number ==4 && r-2>=0){// go up (same column but row decresaed by 2
            if(maze[r-2][c].visited==false){// if destination cell (r-2,c) is not  visited
                maze[r-2][c].visited=true;//mark destination cell (r-2,c) as visited
                maze[r-2][c].bottomwall=false;// mark bottom wall of destination cell (r,c-2) false
                maze[r-2][c].value=' ';// now * at destination cell is changed to white space 
                maze[r-1][c].value=' ';// cell between the curretnt cell (r,c) and (r-1,c) is marked white 
                maze[r-1][c].visited=true;//cell between the curretnt cell (r,c) and (r-1,c) is marked visited
                maze[r][c].topwall=false;// topwall of current cell (r,c) is removed .WE move from this current cell (r,c) to (r,c-2) so top wall of current and bottom wall of destination cell is removed
                X.push(r);Y.push(c);// push current cell r and c to stack
                r=r-2;
                countvisited++;// increase visitede cell by 1

            }
            else
                continue;
           }
           }
           else{// else part of algorithm on wikipedia
            r=X.top();// access element from stack
           X.pop();
           c=Y.top();
           Y.pop();

           }
           clearscreen();
           display(maze);
}
finalX=r;
finalY=c;
maze[finalX][finalY].value='E';
  //system("cls");// clear the entire screen
  clearscreen();// bring the cursor to 0,0
  display(maze);

}

int main()
{

   cout<<"MAZE GENERATION "<<endl;
   r=c=finalX=finalY=0;
  //display(  maze);
   cout<<endl;
   cout<<endl;
   total=((size-1)/2)*((size-1)/2);
   //system("cls");
   initiliaze(maze);
   display(maze);
   generateprogram(maze);
    return 0;
}

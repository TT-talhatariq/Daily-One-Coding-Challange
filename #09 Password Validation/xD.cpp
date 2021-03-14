#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cctype>
#include <windows.h>
using namespace std;

#define KEY_UP 72

#define KEY_DOWN 80

#define KEY_LEFT 75

#define KEY_RIGHT 77

bool gameOver;
const int width = 20;
const int height = 20;
int x , y , fruitX , fruitY, score;
int tailX[100] , tailY[100];
int nTail;
enum eDirection
{STOP = 0, RIGHT , LEFT , UP , DOWN};
eDirection dir;

void setUp(){
	gameOver = false; 
	dir = STOP;
	score = 0;
	x = width/2;
	y = height/2;
	fruitX = rand() % width;
	fruitY = rand() % height;
}
void Draw(){
	system("cls");
	for(int i =0; i < width+3; i++){
		cout << "#";
	}
	cout <<endl;
	
	for(int j = 0; j< height; j++){
		for(int i= 0; i < width; i++){	
			if(i ==0){
				cout << "#";
				cout << " ";
			}
			if(i == x && j == y){
				cout << "0";
			}
		    else if(i== fruitX && j== fruitY ){
				cout << "F";
			}
			else{
				//keeping track of tail with
				bool print = false;
				for(int k =0; k < nTail; k++){
					if(tailX[k]== i && tailY[k]==j){
						cout << "o";
						print = true;
					}
				}
				if(!print)
			    	cout << " ";
			}
			
			if(i == width -1){
				cout << "#";
			}
			
		}
		cout <<endl;
	}
	
	for(int i =0; i < width+3; i++){
		cout << "#";
	}
	cout <<endl;
	cout << "Score = " <<score <<endl;
}
void Input(){
	if (_kbhit()){//keyboard hit
		switch(_getch()){//get character
			case KEY_UP:
				dir = UP;
				break;
			case KEY_DOWN:
				dir =DOWN;
				break;
			case KEY_LEFT:
				dir = RIGHT;
				break;
			case KEY_RIGHT:
				dir = LEFT;
				break;
			default :
				break;
		}
	}
}
void Logic(){
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X , prev2Y;
	
	tailX[0]=x;
	tailY[0]=y;
	
	for(int i=1; i < nTail; i++){
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;	
	}
	
	switch(dir){
		case LEFT:
			x++;
			break;
		case RIGHT:
			x--;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		default:
			break;
	}

  //  if(x > width || x > height || x <0 || y <0){
  //	gameOver=true;
//	}
    if( x >= width ){
    	x =0;
	}
	else if(x <0){
		x=width-1;
	}
	if(y >= height){
		y = 0;
	}
	else if( y <0){
		y = height-1;
	}
	for(int i=0; i < nTail; i++){
		if(tailX[i] == x && tailY[i] == y){
			gameOver = true;
		}
	}
	if(x == fruitX && y ==fruitY){
		score= score+10;
		fruitX = rand() % width ;
    	fruitY = rand() % height ;
    	nTail++;
	}
}

int main(){
	setUp();
	while(!gameOver){
		Draw();
		Input();
		Logic();
		Sleep(100);
	}
	
}

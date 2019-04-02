#include <iostream>
using namespace std;
bool gameover;
const int width =  20;
cont int height = 20;
int x, y, fruitX, fruitY, score;
enum edirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
edirection dir;
void setup()
{
	gameover = false;
	dir = STOP;
	x =  width/ 2;
	y = height/ 2;
	fruitX =  rand() % width;
	fruitY = rand() % height;
	score = 0;


}
void draw()
{
 	system("clear");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i< height; i++)
	{
		for (int j=0; j< width; j++)
		{
			if ( j == 0)
				cout << "#";
		
			if (i ==  y && j == x)
				cout << "0";
			else if(i == fruitY && j == fruitX)
			       cout << "F";	
			
			else 
				cout << " ";
			if(j == widht - 1)
				cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width; i++)
                cout << "#";
	cout << endl;

	



}

void input() 
{




}

void logic()
{





}
	
int main() 
{
 
	setup();
	while (!gameover)
	{
		draw();
		input();
		logic():
	}






    return 0;

}


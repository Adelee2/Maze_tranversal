
#ifndef MAZE_TRANVERSE_H
#define MAZE_TRANVERSE_H

#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <ctime>
#include <random>

using namespace std;

class Tranversal{
	
	friend void setx(Tranversal &,int);
	
	private:
		int rows=0;
		int cols=0;
		array<array<char,12>,12> arrs;
		array<array<unsigned int,12>,12> arris;
	public:
		Tranversal(array<array<char,12>,12> &);
		Tranversal(array<array<unsigned int,12>,12> &);
		void draw_maze();
		char maze_tranverse(int rowin, int colin);
		void display();
};

#endif

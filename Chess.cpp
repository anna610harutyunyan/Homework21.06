#include <iostream>
#include <stdexcept>
#include <utility>
class Figure 
{
	std::string colour;
	std::pair<int, int> position;
	virtual void movement(int newRow, int newCol) = 0;

	std::string get_colour() const
	{
		if (colour != "black" || colour != "white")
		{
			std::cerr << "Warning!! Clour of the figures can be only white and black!!! \n";
			throw std::runtime_error("Please choose the white or black");
		}

		return colour;
	}
	std::pair <int, int> start_position(int row, int col)
	{
		return std::make_pair(row, col);
	}
	void  change_position(int newRow, int newCol)
	{
		position = std::make_pair(newRow, newCol);
	}

};

class King:public Figure
{
public:
	void movement(int newRow, int newCol) override
	{
		std::cout << "King can move one square in any direction: horizontally, vertically, or diagonally:\n ";
	}
};
class Queen :public Figure
{
public:
	void movement(int newRow, int newCol)override
	{
		std::cout << "Queen can move any number of squares in any direction: horizontally, vertically, or diagonally:\n ";
	}
};

class Rook :public Figure
{
	public:
		void movement(int newRow, int newCol)override
	{
		std::cout << "Rook can move horizontally or vertically any number of squares. It cannot move diagonally:\n ";
	}
};

class Bishop :public Figure
{
public:
	void movement(int newRow, int newCol)override
	{
		std::cout << "Bishop can move diagonally  any number of squares:\n ";
	}
};

class Knight :public Figure
{
public:
	void movement(int newRow, int newCol)override
	{
		std::cout << "Knight  moves in an L-shaped pattern. It can move two squares in one direction (horizontally or vertically) and then one square perpendicular to that direction. Knights are the only pieces that can jump over other pieces on the board: \n";
	}
};

class Pawn :public Figure
{
public:
	void movement(int newRow, int newCol) override
	{
		std::cout << " Pawns capture diagonally, one square forward and to the left or right.\n";
	}


};

int main(int argc, char** argv)
{
	King king;
	king.movement(4,5);
	Queen queen;
	queen.movement(3,8);

	return 0;
}
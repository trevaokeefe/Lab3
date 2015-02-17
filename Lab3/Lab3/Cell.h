#pragma once

ref class Cell
{
private:
	int row, col;
	char status;

public:

	Cell(int, int, char);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	void set_status(char);
	char get_status();
};
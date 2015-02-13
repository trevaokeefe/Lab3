#pragma once

ref class Cell
{
private:
	int row, col;
	char status;

public:

	Cell(int, int, char);

	void set_status(char);
	char get_status();
};
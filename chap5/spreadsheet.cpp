#include <iostream>

const int ROWS = 10;
const int COLS = 10;

int spreadsheet[ROWS][COLS]{};

inline int &cell(char col, int row) { return spreadsheet[row - 1][col - 'A']; }

const char SEPERATOR[] = "\t";

int main()
{
    cell('D', 4) = 99;
    cell('I', 10) = 30;
    cell('F', 2) = 19;
    cell('G', 5) = 93;
    cell('A', 4) = 12;

    std::cout << SEPERATOR;
    for (int col = 0; col < COLS; col++)
    {
        std::cout << (char)('A' + col) << SEPERATOR;
    }
    std::cout << std::endl;

    for (int row = 0; row < ROWS; row++)
    {
        spreadsheet[row][9] = 0;

        for (int col = 0; col < 9; col++) {
            spreadsheet[row][9] += spreadsheet[row][col];
        }
        
        std::cout << row + 1 << SEPERATOR;
        for (int col = 0; col < COLS; col++)
        {
            std::cout << spreadsheet[row][col] << SEPERATOR;
        }
        std::cout << std::endl;
    }

    return 0;
}

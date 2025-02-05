// Dustin Henderson
// Rectangle Area

using namespace std;

#include <iostream>
#include <conio.h>

// function prototypes
int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int main()
{
    cout << "Calculate the area of a rectangle. \n";
    int length = GetLengthFromUser();
    if (length > 0)
    {
        int width = GetWidthFromUser();
        if (width > 0)
        {
            int area = CalculateArea(length, width);
            DisplayArea(area);
        }
        else
        {
            cout << "You did not enter a positive value for width. Please try again. ";
        }
    }
    else
    {
        cout << "You did not enter positive value for length. Please try again. ";
    }

    (void)_getch();
    return 0;
}

int GetLengthFromUser()
{
    int length = 0;
    cout << "Enter a number for length: ";
    cin >> length;
    return length;
}

int GetWidthFromUser()
{
    int width = 0;
    cout << "Enter a number for width: ";
    cin >> width;
    return width;
}

int CalculateArea(int length, int width)
{
    int area = length * width;
    return area;
}

void DisplayArea(int area)
{
    cout << "Rectangle area: " << area;
}
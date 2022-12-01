#include <iostream>
#include "Piece.cpp"
using namespace std;

int main()
{
    Piece pieza1(false, 6, 6);
    Piece pieza2(true, 6, 5);

    pieza1.printModel();
    pieza2.printModel();

    return 0;
}
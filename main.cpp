#include <iostream>
#include <vector>
#include <algorithm>
#include "Piece.cpp"
#include "Player.cpp"
using namespace std;
vector<Piece> domino;
Player *players[4];

vector<Piece> fillDomino();

int main()
{
    fillDomino();
    srand(time(NULL));
    random_shuffle(domino.begin(), domino.end());
    string name;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el nombre del " << i + 1 << "° jugador.\n";
        getline(cin, name);
        players[i] = new Player(name);
        players[i]->pushMyPieces(domino.back());
        domino.pop_back();
        players[i]->pushMyPieces(domino.back());
        domino.pop_back();
    }

    for (int r = 0; r < 28; r++)
    {
        domino.at(r).printModel();
    }
    cout << "\n";
    cout << "Valor de la cola superior: " << domino.at(0).getNodeLeft();
    cout << "\n";
    cout << "Valor de la cola inferior: " << domino.at(domino.size() - 1).getNodeRight();
    return 0;
}
vector<Piece> fillDomino()
{
    domino.push_back(Piece(false, 0, 0));
    domino.push_back(Piece(true, 0, 1));
    domino.push_back(Piece(true, 0, 2));
    domino.push_back(Piece(true, 0, 3));
    domino.push_back(Piece(true, 0, 4));
    domino.push_back(Piece(true, 0, 5));
    domino.push_back(Piece(true, 0, 6));
    domino.push_back(Piece(false, 1, 1));
    domino.push_back(Piece(true, 1, 2));
    domino.push_back(Piece(true, 1, 3));
    domino.push_back(Piece(true, 1, 4));
    domino.push_back(Piece(true, 1, 5));
    domino.push_back(Piece(true, 1, 6));
    domino.push_back(Piece(false, 2, 2));
    domino.push_back(Piece(true, 2, 3));
    domino.push_back(Piece(true, 2, 4));
    domino.push_back(Piece(true, 2, 5));
    domino.push_back(Piece(true, 2, 6));
    domino.push_back(Piece(false, 3, 3));
    domino.push_back(Piece(true, 3, 4));
    domino.push_back(Piece(true, 3, 5));
    domino.push_back(Piece(true, 3, 6));
    domino.push_back(Piece(false, 4, 4));
    domino.push_back(Piece(true, 4, 5));
    domino.push_back(Piece(true, 4, 6));
    domino.push_back(Piece(false, 5, 5));
    domino.push_back(Piece(true, 5, 6));
    domino.push_back(Piece(false, 6, 6));
    return domino;
}
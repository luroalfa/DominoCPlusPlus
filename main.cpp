/*
    @author:        Luis A. Rodríguez F.
    Date:           Wednesday, November 07th, 2022.
    Last edit:      Friday, November 09th, 2022.
    Description:
        Create a game of domino.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"
#include <iomanip>
using namespace std;
vector<Piece> domino;
Player *players[4];
int player = 0, round = 0;

bool startingPlayer(int start);
void nextPlayer();

int main()
{
    domino = fillDomino(domino);
    srand(time(NULL));
    random_shuffle(domino.begin(), domino.end());
    string name;
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el nombre del " << i + 1 << "° jugador.\n";
        getline(cin, name);
        players[i] = new Player(name);
        deliverPiece(players[i], domino);
    }
    system("clear");
    do
    {
        if (round == 0)
        {
            players[0]->whoInitGame() && cout << "El jugador " << players[0]->getName() << " inicia la partida con la pieza doble 6\n";
            players[0]->whoInitGame() && startingPlayer(0);
            players[1]->whoInitGame() && cout << "El jugador " << players[1]->getName() << " inicia la partida con la pieza doble 6\n";
            players[1]->whoInitGame() && startingPlayer(1);
            players[2]->whoInitGame() && cout << "El jugador " << players[2]->getName() << " inicia la partida con la pieza doble 6\n";
            players[2]->whoInitGame() && startingPlayer(2);
            players[3]->whoInitGame() && cout << "El jugador " << players[3]->getName() << " inicia la partida con la pieza doble 6\n";
            players[3]->whoInitGame() && startingPlayer(3);
            domino.push_back(players[player]->init());
            systemPauseLinux(); // Desabilitar en Windows
            // system("pause"); // Habilitar en Windows
        }
        for (int i = 0; i < 4 && !players[player]->win(); i++)
        {
            nextPlayer(player);
            system("clear");
            cout << "RONDA#" << round + 1 << "\n";
            showStackedDomino(domino);
            printScore(players);
            cout << "\n";
            cout << "Pila de dominó superior: " << domino.at(0).getNodeLeft() << "\n";
            cout << "Pila de dominó inferior: " << domino.at(domino.size() - 1).getNodeRight() << "\n\n";
            askThePlayer(players[player], player, domino);
            systemPauseLinux(); // Desabilitar en Windows
            // system("pause"); // Habilitar en Windows
        }
        round++;
    } while (!playerWithoutPiece(players));
    if (playerWithoutPiece(players))
    {
        (players[0]->amtPieces() == 0) && cout << "El jugador " << players[0]->getName() << " es el ganador.🥇";
        (players[1]->amtPieces() == 0) && cout << "El jugador " << players[1]->getName() << " es el ganador.🥇";
        (players[2]->amtPieces() == 0) && cout << "El jugador " << players[2]->getName() << " es el ganador.🥇";
        (players[3]->amtPieces() == 0) && cout << "El jugador " << players[3]->getName() << " es el ganador.🥇";
    }

    return 0;
}

bool startingPlayer(int start)
{
    player = start;
    return true;
}
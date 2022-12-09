
#include "Player.cpp"
#include <unistd.h>

vector<Piece> fillDomino(vector<Piece> domino);
void deliverPiece(Player _player);
void showMainMsj();
/// @brief Deliver seven piece the player
/// @param _player is a instance of the class Player
/// @param domino is a vector of class Piece
void deliverPiece(Player *&_player, vector<Piece> &domino)
{
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
    _player->pushMyPieces(domino.back());
    domino.pop_back();
}
/// @brief Loading domino
/// @param domino is a vector of class Piece
/// @return return a vector
vector<Piece> fillDomino(vector<Piece> domino)
{
    domino.push_back(Piece(false, 0, 0, "🀱"));
    domino.push_back(Piece(true, 0, 1, "🁤"));
    domino.push_back(Piece(true, 0, 2, "🁥"));
    domino.push_back(Piece(true, 0, 3, "🁦"));
    domino.push_back(Piece(true, 0, 4, "🁧"));
    domino.push_back(Piece(true, 0, 5, "🁨"));
    domino.push_back(Piece(true, 0, 6, "🁩"));
    domino.push_back(Piece(false, 1, 1, "🀹"));
    domino.push_back(Piece(true, 1, 2, "🁬"));
    domino.push_back(Piece(true, 1, 3, "🁭"));
    domino.push_back(Piece(true, 1, 4, "🁮"));
    domino.push_back(Piece(true, 1, 5, "🁯"));
    domino.push_back(Piece(true, 1, 6, "🁰"));
    domino.push_back(Piece(false, 2, 2, "🁁"));
    domino.push_back(Piece(true, 2, 3, "🁴"));
    domino.push_back(Piece(true, 2, 4, "🁵"));
    domino.push_back(Piece(true, 2, 5, "🁶"));
    domino.push_back(Piece(true, 2, 6, "🁷"));
    domino.push_back(Piece(false, 3, 3, "🁉"));
    domino.push_back(Piece(true, 3, 4, "🁼"));
    domino.push_back(Piece(true, 3, 5, "🁽"));
    domino.push_back(Piece(true, 3, 6, "🁾"));
    domino.push_back(Piece(false, 4, 4, "🁑"));
    domino.push_back(Piece(true, 4, 5, "🂄"));
    domino.push_back(Piece(true, 4, 6, "🂅"));
    domino.push_back(Piece(false, 5, 5, "🁙"));
    domino.push_back(Piece(true, 5, 6, "🂌"));
    domino.push_back(Piece(false, 6, 6, "🁡"));
    return domino;
}
void systemPauseLinux()
{
    cin.ignore();
    cin.get();
}

void printSimbol(Player *&_player)
{
    for (int i = 0; i < _player->getMyPieces().size(); i++)
    {
        cout << _player->getMyPieces().at(i).getSimbol() << "  ";
    }
}
void showOptions(Player *&_player)
{
    for (int i = 0; i < _player->getMyPieces().size(); i++)
    {
        cout << i + 1 << ") " << _player->getMyPieces().at(i).getSimbol() << "\n";
    }
    cout << _player->getMyPieces().size() + 1 << ") PASAR TURNO 😅";
}

void printScore(Player *players[4])
{
    cout << players[0]->getName() << " tiene " << players[0]->amtPieces() << " piezas.\n";
    cout << players[1]->getName() << " tiene " << players[1]->amtPieces() << " piezas.\n";
    cout << players[2]->getName() << " tiene " << players[2]->amtPieces() << " piezas.\n";
    cout << players[3]->getName() << " tiene " << players[3]->amtPieces() << " piezas.\n";
}
bool playerWithoutPiece(Player *players[4])
{
    bool result = false;
    if (players[0]->amtPieces() == 0 ||
        players[1]->amtPieces() == 0 ||
        players[2]->amtPieces() == 0 ||
        players[3]->amtPieces() == 0)
    {
        result = true;
    }
    return result;
}

void nextPlayer(int &player)
{
    if (player == 3)
    {
        player = 0;
    }
    else if (player < 3)
    {
        player++;
    }
}

void showStackedDomino(vector<Piece> domino)
{
    for (int i = 0; i < domino.size(); i++)
    {
        domino.at(i).printModel();
    }
    cout << "\n";
}

void askThePlayer(Player *&_player, int &player, vector<Piece> &domino)
{
    int option;
    cout << "⏭️ ⏭️  CONTINUA EL JUGADOR " << _player->getName() << "\n";
    showOptions(_player);
    cout << "\n";
    cout << "👽💬"
         << "\n"
         << "INDICAR CUAL OPCION QUIERE ";
    cin >> option;
    if (option > _player->getMyPieces().size())
    {
        cout << "EL JUGADOR PASA DE TURNO\n";
    }
    else
    {

        if (_player->getMyPieces().at(option - 1).getNodeRight() == domino.at(0).getNodeLeft())
        {
            // Add in front of stack, without turn around piece
            domino.insert(domino.begin(), _player->getPiece(option - 1));
            _player->setNotPlay(true);
        }
        else if (_player->getMyPieces().at(option - 1).getNodeLeft() == domino.at(domino.size() - 1).getNodeRight())
        {
            // Add behind stack, without turn around piece
            domino.push_back(_player->getPiece(option - 1));
            _player->setNotPlay(true);
        }
        else if (_player->getMyPieces().at(option - 1).getNodeRight() == domino.at(domino.size() - 1).getNodeRight()) //*TURN_AROUND BELOW
        {
            // Add behind stack, with turn around piece
            _player->getPieceForTurnAround(option - 1);
            domino.push_back(_player->getPiece(option - 1));
            _player->setNotPlay(true);
        }
        else if (_player->getMyPieces().at(option - 1).getNodeLeft() == domino.at(0).getNodeLeft())
        {
            // Add in front of stack, with turn around piece
            _player->getPieceForTurnAround(option - 1);
            domino.insert(domino.begin(), _player->getPiece(option - 1));
            _player->setNotPlay(true);
        }
        else
        {
            _player->setNotPlay(false);
            cout << "Pieza no coincide con la PILA DEL DOMINÓ\n";
        }
    }
}
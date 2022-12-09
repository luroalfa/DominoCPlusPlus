#include <iostream>
#include <vector>
#include "Piece.cpp"
using namespace std;

class Player
{
private:
    string name;
    vector<Piece> myPieces;
    bool play = false;

public:
    Player(string _name);
    ~Player();
    string getName()
    {
        return this->name;
    }
    void setName(string _name)
    {
        this->name = _name;
    }
    bool getNotPlay()
    {
        return this->play;
    }
    void setNotPlay(bool _play)
    {
        this->play = _play;
    }

    bool win()
    {
        bool result = false;
        if (amtPieces() == 0)
        {
            result = true;
        }
        return result;
    }
    void pushMyPieces(Piece _piece)
    {
        this->myPieces.push_back(_piece);
    }
    vector<Piece> getMyPieces()
    {
        return this->myPieces;
    }
    void getPieceForTurnAround(int _position)
    {
        this->myPieces.at(_position).turnAround();
    }
    Piece getPiece(int _position)
    {
        Piece result = this->myPieces.at(_position);
        this->myPieces.erase(this->myPieces.begin() + _position);
        return result;
    }
    Piece init()
    {
        int counter = 0;
        for (auto &&i : this->myPieces)
        {
            if (i.getPointsValue() == 12)
            {
                break;
            }
            counter++;
        }
        Piece result = this->myPieces.at(counter);
        this->myPieces.erase(this->myPieces.begin() + counter);
        return result;
    }
    bool whoInitGame()
    {
        bool result = false;
        for (auto &&i : this->myPieces)
        {
            if (i.getPointsValue() == 12)
            {
                result = true;
            }
        }
        return result;
    }
    int amtPieces()
    {
        int counter = 0;
        for (auto &&i : this->myPieces)
        {
            counter++;
        }
        return counter;
    }
};

Player::Player(string _name)
{
    this->name = _name;
}

Player::~Player()
{
}

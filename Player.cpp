#include <iostream>
#include <vector>
#include <Piece.cpp>
using namespace std;

class Player
{
private:
    string name;
    vector<Piece> myPieces;

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
    void pushMyPieces(Piece _piece)
    {
        this->myPieces.push_back(_piece);
    }
};

Player::Player(string _name)
{
    this->name = _name;
}

Player::~Player()
{
}

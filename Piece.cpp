#include <iostream>
using namespace std;
class Piece
{
private:
    bool alignVertical;
    int nodeLeft, nodeRight;
    int pointsValue;
    string tab = "    ";

public:
    Piece(bool _alignVertical, int _nodeLeft, int _nodeRight);
    ~Piece();
    bool getAlignVertical()
    {
        return this->alignVertical;
    }
    void setAlignVertical(bool _alignVertical)
    {
        this->alignVertical = _alignVertical;
    }

    int getNodeLeft()
    {
        return this->nodeLeft;
    }
    void setNodeLeft(int _nodeLeft)
    {
        this->nodeLeft = _nodeLeft;
    }

    int getNodeRight()
    {
        return this->nodeRight;
    }
    void setNodeRight(int _nodeRight)
    {
        this->nodeRight = _nodeRight;
    }

    int getPointsValue()
    {
        return this->pointsValue;
    }
    void setPointsValue(int _pointsValue)
    {
        this->pointsValue = _pointsValue;
    }

    void printModel()
    {
        if (this->alignVertical == true)
        {
            switch (this->nodeLeft)
            {
            case 0:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                break;
            case 1:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                break;
            case 2:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■     ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║     ■ ║\n";
                printf("\x1b[0m");
                break;
            case 3:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■     ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║     ■ ║\n";
                printf("\x1b[0m");
                break;
            case 4:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                break;
            case 5:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                break;
            case 6:
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╔═══════╗\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                break;
            }

            cout << tab;
            printf("\x1b[0;30;47m");
            cout << "╠═══¤═══╣\n";
            printf("\x1b[0m");
            cout << tab;

            switch (this->nodeRight)
            {
            case 0:
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 1:
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 2:
                printf("\x1b[0;30;47m");
                cout << "║ ■     ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║     ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 3:
                printf("\x1b[0;30;47m");
                cout << "║ ■     ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║     ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 4:
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║       ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 5:
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║   ■   ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            case 6:
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "║ ■   ■ ║\n";
                printf("\x1b[0m");
                cout << tab;
                printf("\x1b[0;30;47m");
                cout << "╚═══════╝\n";
                printf("\x1b[0m");
                break;
            }
        }
        else
        {
        }
    }
};
/// @brief First constructor
/// @param _alignVertical
/// @param _nodeLeft
/// @param _nodeRight
Piece::Piece(bool _alignVertical, int _nodeLeft, int _nodeRight)
{
    this->alignVertical = _alignVertical;
    this->nodeLeft = _nodeLeft;
    this->nodeRight = _nodeRight;
    this->pointsValue = nodeLeft + nodeRight;
}

Piece::~Piece()
{
}

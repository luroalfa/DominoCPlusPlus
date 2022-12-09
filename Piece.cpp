#include <iostream>
using namespace std;
class Piece
{
private:
    bool alignVertical;
    int nodeLeft, nodeRight;
    int pointsValue;
    string simbol;
    string tab = "    ";
    //*Private methods
    void firstRightRow(int _nodeRight)
    {
        switch (_nodeRight)
        {
        case 0:
            cout << "       ║\n"; // RIGHT
            break;
        case 1:
            cout << "       ║\n"; // RIGHT
            break;
        case 2:
            cout << " ■     ║\n"; // RIGHT
            break;
        case 3:
            cout << " ■     ║\n"; // RIGHT
            break;
        case 4:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        case 5:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        case 6:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        }
    }
    void firstLeftRow(int _nodeLeft)
    {
        switch (_nodeLeft)
        {
        case 0:
            cout << "║       ║"; // LEFT
            break;
        case 1:
            cout << "║       ║"; // LEFT
            break;
        case 2:
            cout << "║ ■     ║"; // LEFT
            break;
        case 3:
            cout << "║ ■     ║"; // LEFT
            break;
        case 4:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        case 5:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        case 6:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        }
    }
    void secondLeftRow(int _nodeLeft)
    {
        switch (_nodeLeft)
        {
        case 0:
            cout << "║       ¤"; // LEFT
            break;
        case 1:
            cout << "║   ■   ¤"; // LEFT
            break;
        case 2:
            cout << "║       ¤"; // LEFT
            break;
        case 3:
            cout << "║   ■   ¤"; // LEFT
            break;
        case 4:
            cout << "║       ¤"; // LEFT
            break;
        case 5:
            cout << "║   ■   ¤"; // LEFT
            break;
        case 6:
            cout << "║ ■   ■ ¤"; // LEFT
            break;
        }
    }
    void secondRightRow(int _nodeRight)
    {
        switch (_nodeRight)
        {
        case 0:
            cout << "       ║\n"; // RIGHT
            break;
        case 1:
            cout << "   ■   ║\n"; // RIGHT
            break;
        case 2:
            cout << "       ║\n"; // RIGHT
            break;
        case 3:
            cout << "   ■   ║\n"; // RIGHT
            break;
        case 4:
            cout << "       ║\n"; // RIGHT
            break;
        case 5:
            cout << "   ■   ║\n"; // RIGHT
            break;
        case 6:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        }
    }
    void thirdLeftRow(int _nodeLeft)
    {
        switch (_nodeLeft)
        {
        case 0:
            cout << "║       ║"; // LEFT
            break;
        case 1:
            cout << "║       ║"; // LEFT
            break;
        case 2:
            cout << "║     ■ ║"; // LEFT
            break;
        case 3:
            cout << "║     ■ ║"; // LEFT
            break;
        case 4:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        case 5:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        case 6:
            cout << "║ ■   ■ ║"; // LEFT
            break;
        }
    }
    void thirdRightRow(int _nodeRight)
    {
        switch (_nodeRight)
        {
        case 0:
            cout << "       ║\n"; // RIGHT
            break;
        case 1:
            cout << "       ║\n"; // RIGHT
            break;
        case 2:
            cout << "     ■ ║\n"; // RIGHT
            break;
        case 3:
            cout << "     ■ ║\n"; // RIGHT
            break;
        case 4:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        case 5:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        case 6:
            cout << " ■   ■ ║\n"; // RIGHT
            break;
        }
    }

public:
    Piece(bool _alignVertical, int _nodeLeft, int _nodeRight, string simbol);
    ~Piece();
    //*Public methods
    bool getAlignVertical()
    {
        return this->alignVertical;
    }
    void setAlignVertical(bool _alignVertical)
    {
        this->alignVertical = _alignVertical;
    }
    void turnAround()
    {
        int aux;
        aux = this->nodeLeft;
        this->nodeLeft = this->nodeRight;
        this->nodeRight = aux;
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

    string getSimbol()
    {
        return this->simbol;
    }

    int getPointsValue()
    {
        return this->pointsValue;
    }
    void setPointsValue(int _pointsValue)
    {
        this->pointsValue = _pointsValue;
    }
    /// @brief Print a figure of a piece.
    void printModel()
    {
        if (this->alignVertical == true)
        {
            switch (this->nodeLeft)
            {
            case 0:
                cout << tab;

                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║       ║\n";
                break;
            case 1:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║       ║\n";
                break;
            case 2:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║ ■     ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║     ■ ║\n";
                break;
            case 3:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║ ■     ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║     ■ ║\n";
                break;
            case 4:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                break;
            case 5:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                break;
            case 6:
                cout << tab;
                cout << "╔═══════╗\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                break;
            }

            cout << tab;
            cout << "╠═══¤═══╣\n";
            cout << tab;

            switch (this->nodeRight)
            {
            case 0:
                cout << "║       ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 1:
                cout << "║       ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 2:
                cout << "║ ■     ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║     ■ ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 3:
                cout << "║ ■     ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║     ■ ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 4:
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║       ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 5:
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║   ■   ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            case 6:
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "║ ■   ■ ║\n";
                cout << tab;
                cout << "╚═══════╝\n";
                break;
            }
        }
        else
        {

            cout << "╔═══════╦═══════╗\n";
            firstLeftRow(nodeLeft);
            firstRightRow(nodeRight);
            secondLeftRow(nodeLeft);
            secondRightRow(nodeRight);
            thirdLeftRow(nodeLeft);
            thirdRightRow(nodeRight);
            cout << "╚═══════╩═══════╝\n";
        }
    }
};
/// @brief First constructor
/// @param _alignVertical
/// @param _nodeLeft
/// @param _nodeRight
Piece::Piece(bool _alignVertical, int _nodeLeft, int _nodeRight, string _simbol)
{
    this->alignVertical = _alignVertical;
    this->nodeLeft = _nodeLeft;
    this->nodeRight = _nodeRight;
    this->pointsValue = nodeLeft + nodeRight;
    this->simbol = _simbol;
}
/// @brief This is desctructor
Piece::~Piece()
{
}

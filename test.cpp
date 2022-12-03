/*
    @author: Luis A. Rodriguez F.
    Date:    Tuesday, November 29th, 2022.
    Last edit:Tuesday, November 29th, 2022.
    Description:
    Create a domino game.
*/
#include <iostream>

using namespace std;

int main()
{

    for (int r = 0; r <= 3; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            switch (r)
            {
            case 0:
                cout << "╔═══╗\t";
                break;
            case 1:
                cout << "║   ║\t";
                break;
            case 2:
                cout << "║   ║\t";
                break;
            case 3:
                cout << "╚═══╝\t";
                break;
            }
        }
        cout << "\n";
    }
}

// cout << "╔═══╗\n";
// cout << "║   ║\n";
// cout << "║   ║\n";
// cout << "║   ║\n";
// cout << "╠═══╣\n";
// cout << "║   ║\n";
// cout << "║   ║\n";
// cout << "║   ║\n";
// cout << "╚═══╝\n";

// printf("\x1b[0;30;47m");

// cout << "╔═══════╦═══════╗\n";
// cout << "║ ■   ■ ║ ■   ■ ║\n";
// cout << "║ ■   ■ ║ ■   ■ ║\n";
// cout << "║ ■   ■ ║ ■   ■ ║\n";
// cout << "╚═══════╩═══════╝\n";

// printf("\x1b[0m");

// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "╔═══════╗\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║ ■   ■ ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║ ■   ■ ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║ ■   ■ ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "╠═══════╣\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║ ■   ■ ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║   ■   ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "║ ■   ■ ║\n";
// printf("\x1b[0m");
// cout << tab;
// printf("\x1b[0;30;47m");
// cout << "╚═══════╝\n";
// printf("\x1b[0m");

// cout << "╔═══╗\n";
// cout << "║   ║\n";
// cout << "║ ■ ║\n";
// cout << "║   ║\n";
// cout << "╠═══╣\n";
// cout << "║   ║\n";
// cout << "║ ■ ║\n";
// cout << "║   ║\n";
// cout << "╚═══╝\n";

// void firstLeftRow(int nodeLeft);
// void firstRightRow(int nodeRight);
// void secondLeftRow(int nodeLeft);
// void secondRightRow(int nodeRight);
// void thirdLeftRow(int nodeLeft);
// void thirdRightRow(int nodeRight);

// int nodeLeft = 5;
//     int nodeRight = 5;
//     printf("\x1b[0;30;47m");
//     cout << "╔═══════╦═══════╗\n";
//     firstLeftRow(nodeLeft);
//     firstRightRow(nodeRight);
//     secondLeftRow(nodeLeft);
//     secondRightRow(nodeRight);
//     thirdLeftRow(nodeLeft);
//     thirdRightRow(nodeLeft);
//     cout << "╚═══════╩═══════╝\n";
//     printf("\x1b[0m");

//     return 0;
// }
// void thirdRightRow(int _nodeRight)
// {
//     switch (_nodeRight)
//     {
//     case 0:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 1:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 2:
//         cout << "     ■ ║\n"; // RIGHT
//         break;
//     case 3:
//         cout << "     ■ ║\n"; // RIGHT
//         break;
//     case 4:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     case 5:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     case 6:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     }
// }
// void thirdLeftRow(int _nodeLeft)
// {
//     switch (_nodeLeft)
//     {
//     case 0:
//         cout << "║       ║"; // LEFT
//         break;
//     case 1:
//         cout << "║       ║"; // LEFT
//         break;
//     case 2:
//         cout << "║     ■ ║"; // LEFT
//         break;
//     case 3:
//         cout << "║     ■ ║"; // LEFT
//         break;
//     case 4:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     case 5:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     case 6:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     }
// }

// void secondRightRow(int _nodeRight)
// {
//     switch (_nodeRight)
//     {
//     case 0:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 1:
//         cout << "   ■   ║\n"; // RIGHT
//         break;
//     case 2:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 3:
//         cout << "   ■   ║\n"; // RIGHT
//         break;
//     case 4:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 5:
//         cout << "   ■   ║\n"; // RIGHT
//         break;
//     case 6:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     }
// }
// void secondLeftRow(int _nodeLeft)
// {
//     switch (_nodeLeft)
//     {
//     case 0:
//         cout << "║       ¤"; // LEFT
//         break;
//     case 1:
//         cout << "║   ■   ¤"; // LEFT
//         break;
//     case 2:
//         cout << "║       ¤"; // LEFT
//         break;
//     case 3:
//         cout << "║   ■   ¤"; // LEFT
//         break;
//     case 4:
//         cout << "║       ¤"; // LEFT
//         break;
//     case 5:
//         cout << "║   ■   ¤"; // LEFT
//         break;
//     case 6:
//         cout << "║ ■   ■ ¤"; // LEFT
//         break;
//     }
// }
// void firstRightRow(int _nodeRight)
// {
//     switch (_nodeRight)
//     {
//     case 0:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 1:
//         cout << "       ║\n"; // RIGHT
//         break;
//     case 2:
//         cout << " ■     ║\n"; // RIGHT
//         break;
//     case 3:
//         cout << " ■     ║\n"; // RIGHT
//         break;
//     case 4:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     case 5:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     case 6:
//         cout << " ■   ■ ║\n"; // RIGHT
//         break;
//     }
// }

// void firstLeftRow(int _nodeLeft)
// {
//     switch (_nodeLeft)
//     {
//     case 0:
//         cout << "║       ║"; // LEFT
//         break;
//     case 1:
//         cout << "║       ║"; // LEFT
//         break;
//     case 2:
//         cout << "║ ■     ║"; // LEFT
//         break;
//     case 3:
//         cout << "║ ■     ║"; // LEFT
//         break;
//     case 4:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     case 5:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     case 6:
//         cout << "║ ■   ■ ║"; // LEFT
//         break;
//     }
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
    string tab = "    ";

    cout << "╔═══╗\n";
    cout << "║   ║\n";
    cout << "║   ║\n";
    cout << "║   ║\n";
    cout << "╠═══╣\n";
    cout << "║   ║\n";
    cout << "║   ║\n";
    cout << "║   ║\n";
    cout << "╚═══╝\n";

    printf("\x1b[0;30;47m");
    cout << "╔═══════╦";  // LEFT
    cout << "═══════╗\n"; // RIGHT
    cout << "║ ■   ■ ║";  // LEFT
    cout << " ■   ■ ║\n"; // RIGHT
    cout << "║ ■   ■ ¤";  // LEFT
    cout << " ■   ■ ║\n"; // RIGHT
    cout << "║ ■   ■ ║";  // LEFT
    cout << " ■   ■ ║\n"; // RIGHT
    cout << "╚═══════╩";  // LEFT
    cout << "═══════╝\n"; // RIGHT
    printf("\x1b[0m");

    printf("\x1b[0;30;47m");
    cout << "╔═══════╦═══════╗\n";
    cout << "║ ■   ■ ║ ■   ■ ║\n";
    cout << "║ ■   ■ ║ ■   ■ ║\n";
    cout << "║ ■   ■ ║ ■   ■ ║\n";
    cout << "╚═══════╩═══════╝\n";
    printf("\x1b[0m");

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
    cout << tab;
    printf("\x1b[0;30;47m");
    cout << "╠═══════╣\n";
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
    cout << tab;
    printf("\x1b[0;30;47m");
    cout << "╚═══════╝\n";
    printf("\x1b[0m");

    cout << "╔═══╗\n";
    cout << "║   ║\n";
    cout << "║ ■ ║\n";
    cout << "║   ║\n";
    cout << "╠═══╣\n";
    cout << "║   ║\n";
    cout << "║ ■ ║\n";
    cout << "║   ║\n";
    cout << "╚═══╝\n";

    return 0;
}

// for (int i = 0; i < 11; i++)
//     {
//         for (int i = 0; i < 53; i++)
//         {
//             cout << "🁚🂓🁟";
//         }
//         cout << "\n";
//     }

#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

class TeamA
{
public:
    string player1;
    string player2;
    string player3;
    int runs;
    TeamA()
    {
        player1 = "Yuvraj Singh";
        player2 = "M S Dhoni";
        player3 = "Virat Kohli";
        cout << "Players in Team A:\n\n";
        cout << player1 << endl
             << player2 << endl
             << player3 << endl
             << endl;
    }
};

class TeamB
{
public:
    string player1;
    string player2;
    string player3;
    int runs;
    TeamB()
    {
        player1 = "Ricky Pointing";
        player2 = "Chris Gayle";
        player3 = "Polard";
        cout << "Players in Team B:\n\n";
        cout << player1 << endl
             << player2 << endl
             << player3 << endl
             << endl;
    }
};

int main()
{
    cout << "---------------------------------------------------------------------------------------------------\n";
    cout << "----------------------------------WELCOME TO GULLY CRICKET APP-------------------------------------\n";
    cout << "----------------------------------------------------------------------------------------------------\n";
    TeamA India;
    TeamB China;
start:
    // cout << India.player1 << endl;
    // cout << China.player1 << endl;
    cout << "Press enter to start the match\n";
    getchar();
    cout << "Match is starting....\n\n";
    usleep(2000000);
    cout << "-------------------------------I inninng-----------------------------\n\n";
    srand(time(NULL));
    int n = rand() % 3;
    if (n == 0)
    {
        cout << India.player1 << " will bat first.\n";
    }
    else if (n == 1)
    {
        cout << India.player2 << " will bat first.\n";
    }
    else if (n == 2)
    {
        cout << India.player3 << " will bat first.\n";
    }
    usleep(1000000);
    cout << endl;
    n = rand() % 3;
    if (n == 0)
    {
        cout << China.player1 << " will bowl first.\n";
    }
    else if (n == 1)
    {
        cout << China.player2 << " will bowl first.\n";
    }
    else if (n == 2)
    {
        cout << China.player3 << " will bowl first.\n";
    }
    cout << endl;

    cout << "Press enter to play the first ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    int runs = rand() % 7;
    cout << "You scored " << runs << " runs." << endl
         << endl;
    int totalRuns = 0;
    totalRuns += runs;

    runs = rand() % 7;
    cout << "Press enter to play the second ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    cout << "You scored " << runs << " runs." << endl
         << endl;
    totalRuns += runs;

    runs = rand() % 7;
    cout << "Press enter to play the third ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    cout << "You scored " << runs << " runs." << endl
         << endl;
    totalRuns += runs;
    cout << "Calculating total runs......" << endl
         << endl;
    usleep(2000000);
    cout << "Congratulations!! you have scored a total of " << totalRuns << " runs." << endl
         << endl;
    int target = totalRuns + 1;
    cout << "The target is " << target << " runs." << endl
         << endl;

    cout << "Press enter to start second Inning." << endl;
    getchar();

    cout << "-------------------------------II inninng-----------------------------\n\n";
    n = rand() % 3;
    if (n == 0)
    {
        cout << China.player1 << " will bat first.\n";
    }
    else if (n == 1)
    {
        cout << China.player2 << " will bat first.\n";
    }
    else if (n == 2)
    {
        cout << China.player3 << " will bat first.\n";
    }
    usleep(1000000);
    cout << endl;
    n = rand() % 3;
    if (n == 0)
    {
        cout << India.player1 << " will bowl first.\n";
    }
    else if (n == 1)
    {
        cout << India.player2 << " will bowl first.\n";
    }
    else if (n == 2)
    {
        cout << India.player3 << " will bowl first.\n";
    }
    cout << endl;

    cout << "Press enter to play the first ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    runs = rand() % 7;
    cout << "You scored " << runs << " runs." << endl
         << endl;
    int totalRuns1 = 0;
    totalRuns1 += runs;

    runs = rand() % 7;
    cout << "Press enter to play the second ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    cout << "You scored " << runs << " runs." << endl
         << endl;
    totalRuns1 += runs;

    runs = rand() % 7;
    cout << "Press enter to play the third ball" << endl;
    getchar();
    cout << "Batting...........\n\n";
    usleep(2000000);
    cout << "You scored " << runs << " runs." << endl
         << endl;
    totalRuns1 += runs;

    cout << "Calculating total runs......" << endl;
    usleep(2000000);

    cout << "Congratulations!! you have scored a total of " << totalRuns1 << " runs." << endl;

    usleep(1000000);
    cout << "Press enter to declare the winner\n";
    getchar();
    cout << "Finalizing the winner team" << endl;
    usleep(2000000);
    if (totalRuns1 >= target)
    {
        cout << "*****************************************" << endl;
        cout << "  Congratulations!!! team B is winner" << endl;
        cout << "*****************************************" << endl;
    }
    else if (totalRuns1 < target)
    {
        cout << "*****************************************" << endl;
        cout << "  Congratulations!!! team A is winner" << endl;
        cout << "*****************************************" << endl;
    }
    else
    {
        cout << "The game is a tie" << endl;
        cout << "Would you like to play again?" << endl;
        cout << "Press y for yes and n for no" << endl;
        char a;
        scanf("%c", &a);
        if (a == 'y')
        {
            goto start;
        }
        else
        {
            goto end;
        }
    }
end:
    return 0;
}
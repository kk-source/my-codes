#include <iostream>
#include <string>
#include <vector>
using namespace std;

class player {
    public:
    string name;
    int id;
    int runsScored;
    player(){
        name="Player 1";
        id=3;
        runsScored=0;
    }
};

class team {
    public:
    string name;
    player players;
    team(){
        name="team";

    }
};

int main(){
    team teamA,teamB;
    cout << teamA.players.name;
    

    return 0;
}
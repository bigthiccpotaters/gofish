#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

void play(vector<int>cards,vector<int>robodeck,vector<int>playerdeck) {

}

void deck() {
    vector<int> cards = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13 };
    srand(time(0));
    random_shuffle(cards.begin(), cards.end());

    vector<int> robodeck;
    vector<int> playerdeck;

    for (int i = 0; i < 14; i++) {
        int randomgrab = rand() % cards.size();
        int sel_elem = cards[randomgrab];
        if ((i % 2) == 1) {
            robodeck.push_back(sel_elem);
        }
        else {
            playerdeck.push_back(sel_elem);
        }
        cout << sel_elem << "\n";
    }
    play(cards, robodeck, playerdeck);
}


int main()
{
    deck();

}


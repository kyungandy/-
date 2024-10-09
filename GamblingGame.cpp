#include "GamblingGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

GamblingGame::GamblingGame() {
    string name;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "��° ���� �̸�>>";
        cin >> name;
        players[i] = new Player(name); 
    }
}

GamblingGame::~GamblingGame() {
    for (int i = 0; i < 2; i++) {
        delete players[i]; 
    }
}

void GamblingGame::start() {
    srand((unsigned)time(0)); 
    int currentPlayer = 0;
    while (true) {
        if (players[currentPlayer]->turn()) { 
            cout << players[currentPlayer]->getName() << "�� �¸�!!" << endl;
            break;
        }
        else {
            cout << "�ƽ�����!" << endl;
        }
        currentPlayer = (currentPlayer + 1) % 2; 
    }
}
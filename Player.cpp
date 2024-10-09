#include <iostream>
#include <cstdlib>
#include "Player.h"

Player::Player(string name) : name(name) {}

string Player::getName() {
    return name;
}

bool Player::turn() {
    cout << name << ": <Enter> 키를 입력하세요.";
    cin.ignore();
    int numbers[3];
    for (int i = 0; i < 3; i++) {
        numbers[i] = rand() % 3;
        cout << numbers[i] << "\t";
    }
    cout << endl;
    return (numbers[0] == numbers[1] && numbers[1] == numbers[2]);
}

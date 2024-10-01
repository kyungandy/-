#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	for (int i = 0; i < 100 * 1024; i++) { mem[i] = 0; }
}
Ram::~Ram() {

}
char Ram::read(int address) {
	return mem[address];

}
void Ram::write(int address, char value) {
	mem[address] = value;
}
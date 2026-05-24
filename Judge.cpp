#include "judge.h"
#include <iostream>

int compareNum(int answer, int input) {

    if (input > answer) return 1;

    if (input < answer) return -1;

    return 0;

}

void Result(int result) {

    if (result == 1) std::cout << "‘å‚«‚¢\n";

    else if (result == -1) std::cout << "¬‚³‚¢\n";

    else std::cout << "ƒQ[ƒ€ƒNƒŠƒA\n";
}

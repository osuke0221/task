#include "input.h"
#include "judge.h"

int main() {
    int answer = RandNum();

    int result = -1;

    while (result != 0) {

        int input = UserInput();

        result = compareNum(answer, input);

        Result(result);
    }
}

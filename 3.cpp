#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN_NUMBER = 1;
const int MAX_NUMBER = 100;

int main() {
    int secretNumber = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;

    int userinput;
    int attempts = 0;
    cout << "Я загадал число от " << MIN_NUMBER << " до " << MAX_NUMBER << "." << endl;

    do {
        cout << "Введите ваше число: ";
        cin >> userinput;
        attempts++;

        if (userinput < MIN_NUMBER || userinput > MAX_NUMBER) {
            cout << "Число должно быть в диапазоне от " << MIN_NUMBER
                 << " до " << MAX_NUMBER << "!" << endl;
            continue;
        }

        if (userinput > secretNumber) {
            cout << "Перелет!" << endl;
        } else if (userinput < secretNumber) {
            cout << "Недолет!" << endl;
        } else {
            cout << endl << "Поздравляю! Вы угадали число " << secretNumber
                 << " за " << attempts << " попыток!" << endl;
        }

    } while (userinput != secretNumber);

    return 0;
}
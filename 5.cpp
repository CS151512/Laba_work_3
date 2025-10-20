#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateY(int n) {
    if (n == 0) {
        return 1.0;
    }

    double y_prev = 1.0;
    double y_current;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            y_current = y_prev;
        } else {
            y_current = y_prev + 1.0 / (i - 1);
        }
        y_prev = y_current;
    }

    return y_current;
}

int main() {
    int n;
    double epsilon;

    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите точность epsilon: ";
    cin >> epsilon;

    if (n < 0) {
        cout << "Ошибка: n должно быть неотрицательным!" << endl;
        return 1;
    }

    double result = calculateY(n);

    cout << fixed << setprecision(10);
    cout << "y(" << n << ") = " << result << endl;

    cout << "\nПромежуточные значения:" << endl;
    cout << "y(0) = 1.0" << endl;

    double y_prev = 1.0;
    for (int i = 1; i <= n; i++) {
        double y_current;
        if (i == 1) {
            y_current = y_prev;
        } else {
            y_current = y_prev + 1.0 / (i - 1);
        }
        cout << "y(" << i << ") = " << y_current << endl;
        y_prev = y_current;
    }

    return 0;
}
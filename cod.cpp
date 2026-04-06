#include <iostream>
#include <cmath>
using namespace std;

bool rectangleParams(double length, double width,
                     double &perimeter, double &area, double &diagonal) {
    if (length <= 0.0 || width <= 0.0) {
        return false;
    }
    perimeter = 2 * (length + width);
    area = length * width;
    diagonal = sqrt(length * length + width * width);
    return true;
}

int main() {
    double a, b;
    cout << "Введите длину и ширину прямоугольника: ";
    cin >> a >> b;

    double c, d, f;
    if (rectangleParams(a, b, c, d, f)) {
        cout << "Периметр: " << c << endl;
        cout << "Площадь: " << d << endl;
        cout << "Диагональ: " << f << endl;
    } else {
        cout << "Ошибка: стороны должны быть положительными числами!" << endl;
    }

    return 0;
}


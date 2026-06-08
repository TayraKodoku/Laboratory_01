#include <iostream>
#include <cmath>

const double PI = acos(-1.0);

double circumference(double radius) {
    return 2 * PI * radius;
}

double circleArea(double radius) {
    return PI * radius * radius;
}

double sectorArea(double radius, double angleDegrees) {
    return (PI * radius * radius * angleDegrees) / 360.0;
}

int main() {
    double radius, angle;

    do {
        std::cout << "Введите радиус окружности (больше 0): ";
        std::cin >> radius;
        if (radius <= 0) {
            std::cout << "Ошибка: радиус должен быть больше 0. Попробуйте снова." << std::endl;
        }
    } while (radius <= 0);

    do {
        std::cout << "Введите угол сектора в градусах (от 0 до 360): ";
        std::cin >> angle;
        if (angle < 0 || angle > 360) {
            std::cout << "Ошибка: угол должен быть в диапазоне [0, 360]. Попробуйте снова." << std::endl;
        }
    } while (angle < 0 || angle > 360);

    double len = circumference(radius);
    double area_circle = circleArea(radius);
    double area_sector = sectorArea(radius, angle);

    std::cout << "Длина окружности: " << len << std::endl;
    std::cout << "Площадь круга: " << area_circle << std::endl;
    std::cout << "Площадь кругового сектора (угол " << angle << "°): " << area_sector << std::endl;

    return 0;
}

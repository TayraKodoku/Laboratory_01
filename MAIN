#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>

using namespace std;

// ==================== КРУГ ====================
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

void circleMenu() {
    double radius, angle;
    
    cout << "\n========== КРУГ ==========" << endl;
    
    do {
        cout << "Введите радиус окружности (больше 0): ";
        cin >> radius;
        if (radius <= 0) {
            cout << "Ошибка: радиус должен быть больше 0. Попробуйте снова." << endl;
        }
    } while (radius <= 0);
    
    do {
        cout << "Введите угол сектора в градусах (от 0 до 360): ";
        cin >> angle;
        if (angle < 0 || angle > 360) {
            cout << "Ошибка: угол должен быть в диапазоне [0, 360]. Попробуйте снова." << endl;
        }
    } while (angle < 0 || angle > 360);
    
    double len = circumference(radius);
    double area_circle = circleArea(radius);
    double area_sector = sectorArea(radius, angle);
    
    cout << "\n--- Результаты ---" << endl;
    cout << "Длина окружности: " << len << endl;
    cout << "Площадь круга: " << area_circle << endl;
    cout << "Площадь кругового сектора (угол " << angle << "°): " << area_sector << endl;
    cout << "==========================" << endl;
}

// ==================== ТРЕУГОЛЬНИК ====================
bool Triangle(array<double, 3>& sides) {
    sort(sides.begin(), sides.end());
    if ((sides[0] > 0) && (sides[0] + sides[1] > sides[2])) {
        return true;
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
        return false;
    }
}

double Perimeter(array<double, 3>& sides) {
    return sides[0] + sides[1] + sides[2];
}

double Square(array<double, 3>& sides) {
    double p = Perimeter(sides) / 2.0;
    return pow((p * (p - sides[0]) * (p - sides[1]) * (p - sides[2])), 0.5);
}

void Isosceles(array<double, 3>& sides) {
    if ((sides[0] == sides[1]) || (sides[1] == sides[2]) || (sides[0] == sides[2])) {
        cout << "Треугольник равнобедренный" << endl;
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }
}

void triangleMenu() {
    array<double, 3> sides;
    
    cout << "\n========== ТРЕУГОЛЬНИК ==========" << endl;
    cout << "Введите три стороны треугольника:" << endl;
    for (size_t i = 0; i < sides.size(); ++i) {
        cout << "Сторона " << (i + 1) << ": ";
        cin >> sides[i];
    }
    
    if (Triangle(sides)) {
        Isosceles(sides);
        cout << "Периметр треугольника = " << Perimeter(sides) << " [ед. изм.]" << endl;
        cout << "Площадь треугольника = " << Square(sides) << " [ед. изм.]" << endl;
    }
    cout << "==========================" << endl;
}

// ==================== ТРАПЕЦИЯ ====================
void trapezoidMenu() {
    double a, b, c, d, h;
    
    cout << "\n========== ТРАПЕЦИЯ ==========" << endl;
    
    // Ввод данных
    cout << "Введите данные трапеции:" << endl;
    cout << "Введите верхнее основание a: ";
    cin >> a;
    cout << "Введите нижнее основание b: ";
    cin >> b;
    cout << "Введите боковую сторону c: ";
    cin >> c;
    cout << "Введите боковую сторону d: ";
    cin >> d;
    cout << "Введите высоту трапеции h: ";
    cin >> h;
    
    // Проверка 1: все числа положительные
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "Ошибка: все числа должны быть положительные!" << endl;
        return;
    }
    
    // Проверка 2: высота должна быть меньше боковых сторон
    if (h > c || h > d) {
        cout << "Ошибка: высота не может быть больше боковых сторон!" << endl;
        return;
    }
    
    // Проверка 3: существование трапеции
    if (a + b + c <= d || a + b + d <= c || a + c + d <= b || b + c + d <= a) {
cout << "Ошибка: Трапеция с такими сторонами не существует!" << endl;
        return;
    }
    
    // Вычисление
    double perimeter = a + b + c + d;
    double ploshad = (a + b) / 2 * h;
    double sr_linia = (a + b) / 2;
    
    // Вывод результатов
    cout << "\n--- Результаты ---" << endl;
    cout << "========================================" << endl;
    cout << "Периметр трапеции: " << perimeter << endl;
    cout << "Площадь трапеции: " << ploshad << endl;
    cout << "Средняя линия: " << sr_linia << endl;
    cout << "========================================" << endl;
}

// ==================== ПРЯМОУГОЛЬНИК ====================
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

void rectangleMenu() {
    double a, b;
    
    cout << "\n========== ПРЯМОУГОЛЬНИК ==========" << endl;
    cout << "Введите длину и ширину прямоугольника: ";
    cin >> a >> b;
    
    double c, d, f;
    if (rectangleParams(a, b, c, d, f)) {
        cout << "\n--- Результаты ---" << endl;
        cout << "Периметр: " << c << endl;
        cout << "Площадь: " << d << endl;
        cout << "Диагональ: " << f << endl;
        cout << "==========================" << endl;
    } else {
        cout << "Ошибка: стороны должны быть положительными числами!" << endl;
    }
}

// ==================== ГЛАВНОЕ МЕНЮ ====================
void showMenu() {
    cout << "\n========================================" << endl;
    cout << "         ГЕОМЕТРИЧЕСКИЙ КАЛЬКУЛЯТОР" << endl;
    cout << "========================================" << endl;
    cout << "1. Круг" << endl;
    cout << "2. Треугольник" << endl;
    cout << "3. Трапеция" << endl;
    cout << "4. Прямоугольник" << endl;
    cout << "0. Выход" << endl;
    cout << "========================================" << endl;
    cout << "Выберите фигуру (0-4): ";
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                circleMenu();
                break;
            case 2:
                triangleMenu();
                break;
            case 3:
                trapezoidMenu();
                break;
            case 4:
                rectangleMenu();
                break;
            case 0:
                cout << "\nПрограмма завершена. До свидания!" << endl;
                break;
            default:
                cout << "\nОшибка: введите число от 0 до 4!" << endl;
        }
        
        if (choice != 0) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 0);
    
    return 0;
}

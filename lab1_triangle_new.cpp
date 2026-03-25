#include <iostream>
#include <array> // хочу записать стороны треугольника в данный контейнер; они одного типа, поэтому не tuple
#include <algorithm> // для использования sort
#include <cmath> // для возведения в степень в формуле Герона

using namespace std;

bool Triangle(array<double, 3>& sides){ // ссылка & нужна, чтобы не создавалась копия контейнера, т.е. работа программы ускоряется и в памяти не занимается лишнее место
    sort(sides.begin(), sides.end()); //сортируем контейнер, чтобы проще проверить существование треугольника
    if ((sides[0] > 0) && (sides[0] + sides[1] > sides[2])) { // если первый элемент больше 0, то остальные тоже; если сумма меньших стороны больше третьей, то треугольник существует
        return 1;
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
        return 0;
    }
}


double Perimeter(array<double, 3>& sides){ // функция нахождения периметра
    return sides[0]+sides[1]+sides[2];
}


double Square(array<double, 3>& sides){ // функция нахождения площади по формуле Герона
    double p = Perimeter(sides) / 2.0; //полупериметр
    return pow((p*(p-sides[0])*(p-sides[1])*(p-sides[2])), 0.5);
}


void Isosceles(array<double, 3>& sides){ // функция проверки на равнобедренность
    if ((sides[0] == sides[1]) || (sides[1] == sides[2]) || (sides[0] == sides[2])){
        cout << "Треугольник равнобедренный" << endl;
    } else {
        cout << "Треугольник не равнобедренный" << endl;
    }
}

int main(){
    array<double, 3> sides;
    for (size_t i = 0; i < sides.size(); ++i){ // ввод сторон треугольника с клавиатуры
        cin >> sides[i];
    }

    if (Triangle(sides)) { // ~если треугольник существует
        Isosceles(sides);
        cout << "Периметр треугольника = " << Perimeter(sides) << " [ед.изм.]" << endl;
        cout << "Площадь треугольника = " << Square(sides) << " [ед.изм.]" << endl;
    } else {
        return 0;
    }

    return 0;
}
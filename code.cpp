#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int length, width;
    cout << "Enter parameters: ";
    cin >> length;
    cin >>  width;
        
    int perimeter = 2 * (length + width);
    int square = length * width;
    double diagonal = sqrt(length*length + width*width);
    
    cout << perimeter << ", " << square << ", " << diagonal;
    return 0;
}

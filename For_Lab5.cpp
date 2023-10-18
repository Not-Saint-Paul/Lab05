/************************************
 * Автор: Станковский П.А.          *
 * Дата: 18.10.2023                 *
 * Название: Shitcode Lab5 v1       *
 * https://onlinegdb.com/L6zPg2s2s  *
 ************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int i, n, sumOfEvenOrdinalNumbers, sumOfOddOrdinalNumbers;
    int T[n];
    
    for (i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumOfOddOrdinalNumbers += T[i];
        } else {
            sumOfEvenOrdinalNumbers += T[i];
        }
    }
    
    cout << "Сумма чисел с чётными порядковыми номерами равна " << sumOfEvenOrdinalNumbers << endl
    << "Сумма чисел с нечётными порядковыми номерами равна " << sumOfOddOrdinalNumbers << endl;

    return 0;
}

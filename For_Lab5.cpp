/************************************
 * Автор: Станковский П.А.          *
 * Дата: 19.10.2023                 *
 * Название: Shitcode Lab5 v1.1     *
 * https://onlinegdb.com/WLLgbCG5F- *
 ************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int ai, en = 6, sumOfEvenOrdinalNumbers, sumOfOddOrdinalNumbers;
    int T[en] = {1, 2, 1, 2, 1, 2};
    for (ai = 0; ai < en; ++ai) {
        if (ai % 2 == 0) {
            sumOfOddOrdinalNumbers += T[ai];
        } else {
            sumOfEvenOrdinalNumbers += T[ai];
        }
    }
    cout << "Сумма чисел с чётными порядковыми номерами равна " << sumOfEvenOrdinalNumbers << endl
    << "Сумма чисел с нечётными порядковыми номерами равна " << sumOfOddOrdinalNumbers << endl;

    return 0;
}

/****************************************
 * Автор: Станковский П.А.              *
 * Дата: 28.12.2023                     *
 * Shitcode Lab5 v2 Christmas Update    *
 * https://onlinegdb.com/n10jOfmY-      *
 ****************************************/
#include <iostream>
#include <math.h>
using namespace std;

int SumOfNThOrdinalNumbers(int array[], int length, int numberOfStartIndex) {

    int result = 0, internalDigit;

    for (internalDigit = numberOfStartIndex; internalDigit < length; internalDigit += 2) {
        result += array[internalDigit];
    }

    return result;
}

int main() {

  int mainArray[] = {1, 2, 1, 2, 1, 2};

    cout << "Сумма чисел с чётными порядковыми номерами равна ";
    cout << SumOfNThOrdinalNumbers(mainArray, 6, 1);
    cout << endl
    << "Сумма чисел с нечётными порядковыми номерами равна ";
    cout << SumOfNThOrdinalNumbers(mainArray, 6, 0);
    cout << endl;

    return 0;
}

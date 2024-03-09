#include <iostream>
#include <fstream> // бібліотека дя файлів
#include <string>

using namespace std;

#include "Tasks.h"
#include "Examples.h"

void MenuTask() {
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}

void task1() {
    cout << " Calculation of expressions using bitwise operations  \n";

    int a, b, c, d;
    cout << " input a, b, c, d " << " \n ";
    cin >> a >> b >> c >> d;
    a = ((((a << 4) + a) + ((c << 8) + (c << 5) + (c << 4) + (c << 3))) / 32) -
        ((b << 6) + (b << 5) + (b << 4) + ((b << 3)) + (d << 7) - d);
    cout << a << "=a " << b << "=b " << c << "=c " << d << "=d " << endl;

}

void task2() {
    cout << " Data encryption using bitwise operations  \n";

    string input;
    cout << "Enter text (up to 128 characters): "; // виведення тексту
    getline(cin, input); // зчитує рядок який ввели
    string outputFileName = "outb.bin"; // ім'я файлу у який записується текст

    ofstream outputFile(outputFileName, ios::out | ios::binary); // створюється об'єкт і клас для запису файлу
    if (!outputFile) {
        cerr << "Error: Unable to open output file." << endl;
        return; // якщо відкриття файлу не вдалося виведеться помилка
    }
    int maxLength = 128; // максимальна довжина тексту
    string paddedInput = input; // доповнює текс пробілами
    if (paddedInput.length() < maxLength) {
        paddedInput.append(maxLength - paddedInput.length(), ' ');
    }
    for (int i = 0; i < paddedInput.length(); i++) { // кожен символ конвертується у відповідний ASCII-код
        int position = i;
        char c = paddedInput[i];
        int asciiCode = static_cast<int>(c);
        int parityBit = (position ^ asciiCode) & 1;
        int encodedValue = (position << 9) | (asciiCode << 1) |
                           parityBit; // код сувається на 9 бітів вліво а символ на 1 біт вліво, а також додається біт парності
        outputFile.write(reinterpret_cast<const char *>(&encodedValue),
                         sizeof(encodedValue)); // записується це все в файл
    }
    outputFile.close();

    cout << "Text encrypted and saved to file: " << outputFileName << endl;
}


void task3() {
    cout << "  Data encryption using structures with bit fields \n";



}


void task4() {   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}





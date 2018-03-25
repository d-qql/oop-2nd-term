#include <iostream>

using namespace std;

int main()
{
    // Переменная i
    int i = 1;
    // Ссылка на переменную i
    int& ri = i;

    // Так нельзя! Ссылка должна быть инициализирована при создании.
    //
    // int &_ri;
    // _ri = i;

    cout << "i: " << i << ", ri: " << ri << endl;
    cout << "&i: " << &i << ", &ri: " << &ri << endl;
    
    // Изменяем i, проверяем, что значение ri тоже поменялось
    i = 2;

    cout << "i: " << i << ", ri: " << ri << endl;
    cout << "&i: " << &i << ", &ri: " << &ri << endl;

    // Объявляем новую переменную j
    int j = 3;

    // Присваиваем новое значение ссылочной переменной
    ri = j;
    
    // Изменилась не ссылка, а значение ссылочной переменной. Теперь i == ri == j.
    cout << "i: " << i << ", ri: " << ri << ", j: " << j << endl;
    cout << "&i: " << &i << ", &ri: " << &ri << ", &j: " << &j << endl;

    // Изменяем значение j
    j = 4;
    
    // Изменилось только значение j, значения ri и i не поменялись
    cout << "i: " << i << ", ri: " << ri << ", j: " << j << endl;
    cout << "&i: " << &i << ", &ri: " << &ri << ", &j: " << &j << endl;

    return 0;
}

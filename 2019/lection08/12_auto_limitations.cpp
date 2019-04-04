#include <iostream>

using namespace std;

// Это НЕ все ограничения. Это только несколько примеров.
// Вообще автоматическое выведение типа - сложная штука.

class A
{
protected:
    // Это приведёт к ошибке компиляции.
    // Поле класса auto быть не может.
    //auto x;
};

int main()
{
    // Это приведёт к ошибке компиляции.
    // auto - это не 'отсутствие типа, можно писать что угодно'.
    // auto - это 'тип будет проставлен компилятором при инициализации'.
    //auto a = 1;
    //a = "foo";

    // Это приведёт к ошибке компиляции.
    // См. выше - для auto обязательна инициализация сразу.
    //auto c;
    //c = 1;

    return 0;
}
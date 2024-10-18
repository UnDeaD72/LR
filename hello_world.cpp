#include <iostream>
using namespace std;  // Лишнее использование пространства имен

int main() {
    string name;  // Переменная для хранения имени пользователя
    cout << "Enter your name: ";  // Запрос имени
    cin >> name;  // Ввод имени
    cout << "Hello world from " << name << "!" << endl;  // Вывод сообщения
    return 0;
}

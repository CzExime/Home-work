#include <iostream>
#include <iomanip> 
#include <Windows.h>
using namespace std;

// Home Work 1
/*
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };
    GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);
    font.dwFontSize.Y = 16;
    wcscpy_s(font.FaceName, L"MS Gothic");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &font);

    std::cout << "-----------------------" << "\nHappy SysAdmin Day!\n" << "-----------------------\n";

    std::cout << u8"...........　／＞　 フ\n"
        u8"　　　　　　| 　_　 _|\n"
        u8"　 　　　　／`ミ _x 彡\n"
        u8"　　　 　 /　　　 |\n"
        u8"　　　　 /　 ヽ　　 ﾉ\n"
        u8"　　／￣|　　 |　|　|\n"
        u8"　　| (￣ヽ＿_ヽ_)_)\n"
        u8"　　＼二つ................\n";

    return 0;
}
*/
// Home Work 2.1 ( срок 3.10.2025 )
/*
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    double km = 0;
    double time = 0;
    int res;

    //Ввод км
    cout << "Добро пожаловать! \nВведите расстояние (в киллометрах) до аэропорта: ";
    cin >> km;

    //Ввод времени
    cout << "Введите время (в часах) за которое вам нужно доехать до аэропорта: ";
    cin >> time;

    //Счёт скорости
    res = km / time;

    cout << "Вам нужно двигаться со скоростью " << res << "км/ч";
    
    return 0;
}
*/
// Home Work 2.2 ( срок 3.10.2025 )
/*
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int start_hours, start_minutes, start_seconds;
    int end_hours, end_minutes, end_seconds;

    cout << "Введите время начала поездки (часы минуты секунды): ";
    cin >> start_hours >> start_minutes >> start_seconds;

    cout << "Введите время завершения поездки (часы минуты секунды): ";
    cin >> end_hours >> end_minutes >> end_seconds;

    // Переводим все в секунды
    int start_total_seconds = start_hours * 3600 + start_minutes * 60 + start_seconds;
    int end_total_seconds = end_hours * 3600 + end_minutes * 60 + end_seconds;

    // Вычисляем разницу в секундах
    int difference_seconds = end_total_seconds - start_total_seconds;

    // Переводим секунды в минуты (округляем вверх)
    int total_minutes = (difference_seconds + 59) / 60;

    // Стоимость поездки
    const int PRICE_PER_MINUTE = 2;
    int total_cost = total_minutes * PRICE_PER_MINUTE;

    cout << "Время поездки: " << total_minutes << " минут" << endl;
    cout << "Стоимость поездки: " << total_cost << " гривен" << endl;

    return 0;
    
}
*/
// Home Work 2.3 ( срок 3.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    double distance, fuel_consumption;
    double price1, price2, price3;

    cout << "Введите расстояние (км): ";
    cin >> distance;

    cout << "Введите расход бензина на 100 км (литров): ";
    cin >> fuel_consumption;

    cout << "Введите стоимость первого вида бензина (гривен за литр): ";
    cin >> price1;

    cout << "Введите стоимость второго вида бензина (гривен за литр): ";
    cin >> price2;

    cout << "Введите стоимость третьего вида бензина (гривен за литр): ";
    cin >> price3;

    // Вычисляем общий расход бензина
    double total_fuel = (distance * fuel_consumption) / 100.0;

    // Вычисляем стоимость для каждого вида бензина
    double cost1 = total_fuel * price1;
    double cost2 = total_fuel * price2;
    double cost3 = total_fuel * price3;

    // Выводим таблицу
    cout << "\nСравнительная таблица стоимости поездки:" << endl;
    cout << "======================================" << endl;
    cout << fixed << setprecision(2);
    cout << "| Вид бензина | Цена за литр | Общая стоимость |" << endl;
    cout << "|-------------|--------------|-----------------|" << endl;
    cout << "| Бензин 1    | " << setw(8) << price1 << "    | " << setw(12) << cost1 << "      |" << endl;
    cout << "| Бензин 2    | " << setw(8) << price2 << "    | " << setw(12) << cost2 << "      |" << endl;
    cout << "| Бензин 3    | " << setw(8) << price3 << "    | " << setw(12) << cost3 << "      |" << endl;
    cout << "======================================" << endl;
    cout << "Общий расход бензина: " << total_fuel << " литров" << endl;

    return 0;
}
*/
// Home Work 3.1 ( срок 5.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int number;

    cout << "Введите шестизначное число: ";
    cin >> number;

    // Проверка на шестизначность
    if (number < 100000 || number > 999999) {
        cout << "Ошибка! Число должно быть шестизначным." << endl;
        return 1;
    }

    // Разделяем число на цифры
    int digit1 = number / 100000;           // Первая цифра
    int digit2 = (number / 10000) % 10;     // Вторая цифра
    int digit3 = (number / 1000) % 10;      // Третья цифра
    int digit4 = (number / 100) % 10;       // Четвертая цифра
    int digit5 = (number / 10) % 10;        // Пятая цифра
    int digit6 = number % 10;               // Шестая цифра

    // Суммы первых и последних трех цифр
    int sum_first = digit1 + digit2 + digit3;
    int sum_second = digit4 + digit5 + digit6;

    // Проверка на "счастливость"
    if (sum_first == sum_second) {
        cout << "Число " << number << " является счастливым!" << endl;
    }
    else {
        cout << "Число " << number << " не является счастливым." << endl;
    }

    return 0;
}
*/
// Home Work 3.2 ( срок 5.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int number;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    // Проверка на четырехзначность
    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Число должно быть четырехзначным." << endl;
        return 1;
    }

    // Разделяем число на цифры
    int digit1 = number / 1000;        // Первая цифра
    int digit2 = (number / 100) % 10;  // Вторая цифра
    int digit3 = (number / 10) % 10;   // Третья цифра
    int digit4 = number % 10;          // Четвертая цифра

    // Меняем местами цифры
    int new_number = digit2 * 1000 +   // Новая первая цифра (была вторая)
        digit1 * 100 +    // Новая вторая цифра (была первая)
        digit4 * 10 +     // Новая третья цифра (была четвертая)
        digit3;           // Новая четвертая цифра (была третья)

    cout << "Исходное число: " << number << endl;
    cout << "Число после обмена: " << new_number << endl;

    return 0;
}
*/
// Home Work 3.3 ( срок 5.10.2025 )

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int numbers[7];

    cout << "Введите 7 целых чисел:" << endl;

    // Ввод 7 чисел
    for (int i = 0; i < 7; i++) {
        cout << "Число " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Поиск максимального числа
    int max_number = numbers[0];  // Начинаем с первого числа

    for (int i = 1; i < 7; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    // Вывод результата
    cout << "Введенные числа: ";
    for (int i = 0; i < 7; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Максимальное число: " << max_number << endl;

    return 0;
}


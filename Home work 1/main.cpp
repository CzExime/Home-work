#include <iostream>
#include <iomanip> 
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <string>
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
/*
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
*/
// Home Work 4.1 ( срок 19.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int SIZE = 10; 
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    return 0;
}
*/
// Home Work 4.2 ( срок 19.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int SIZE = 15; 
    int arr[SIZE];
    int range_min, range_max, user_value;

    cout << "Введите минимальное значение диапазона: ";
    cin >> range_min;
    cout << "Введите максимальное значение диапазона: ";
    cin >> range_max;

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (range_max - range_min + 1) + range_min;
    }

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введите значение для сравнения: ";
    cin >> user_value;

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < user_value) {
            sum += arr[i];
        }
    }

    cout << "Сумма элементов меньше " << user_value << ": " << sum << endl;

    return 0;
}
*/
// Home Work 4.3 ( срок 19.10.2025 )
/*
int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int MONTHS = 12;
    double profit[MONTHS];

    cout << "Введите прибыль фирмы за 12 месяцев:" << endl;
    for (int i = 0; i < MONTHS; i++) 
    {
        cout << "Месяц " << (i + 1) << ": ";
        cin >> profit[i];
    }

    int start_month, end_month;
    cout << "\nВведите начальный месяц диапазона (1-12): ";
    cin >> start_month;
    cout << "Введите конечный месяц диапазона (1-12): ";
    cin >> end_month;

    if (start_month < 1 || start_month > 12 ||
        end_month < 1 || end_month > 12 ||
        start_month > end_month) 
    {
        cout << "Ошибка! Неверный диапазон месяцев." << endl;
        return 1;
    }

    double min_profit = profit[start_month - 1];
    double max_profit = profit[start_month - 1];
    int min_month = start_month;
    int max_month = start_month;

    for (int i = start_month; i <= end_month; i++) 
    {
        int index = i - 1; 

        if (profit[index] < min_profit) 
        {
            min_profit = profit[index];
            min_month = i;
        }
        if (profit[index] > max_profit) 
        {
            max_profit = profit[index];
            max_month = i;
        }
    }

    cout << "\nВ диапазоне с " << start_month << " по " << end_month << " месяц:" << endl;
    cout << "Максимальная прибыль: " << max_profit << " в месяце " << max_month << endl;
    cout << "Минимальная прибыль: " << min_profit << " в месяце " << min_month << endl;

    return 0;
}
*/
// Home Work 4.4 ( срок 19.10.2025 )
/*
        // Функция для проверки високосного года
bool isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
        // Функция для вычисления количества дней в месяце
int daysInMonth(int month, int year) 
{
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0;
    }
}
        // Функция для вычисления количества дней от начала эпохи до даты
int daysSinceEpoch(int day, int month, int year) 
{
    int totalDays = 0;

    for (int y = 1; y < year; y++) 
    {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) 
    {
        totalDays += daysInMonth(m, year);
    }

    totalDays += day;

    return totalDays;
}
        // Основная функция для вычисления разности в днях
int dateDifference(int day1, int month1, int year1,
    int day2, int month2, int year2) 
{
    int days1 = daysSinceEpoch(day1, month1, year1);
    int days2 = daysSinceEpoch(day2, month2, year2);

    return abs(days2 - days1);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Введите первую дату (день месяц год): ";
    cin >> day1 >> month1 >> year1;

    cout << "Введите вторую дату (день месяц год): ";
    cin >> day2 >> month2 >> year2;

    int difference = dateDifference(day1, month1, year1, day2, month2, year2);

    cout << "Разность между датами: " << difference << " дней" << endl;

    return 0;
}
*/
// Home Work 4.5 ( срок 19.10.2025 )
/*
        // Функция для вычисления среднего арифметического массива
double calculateAverage(int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
}
        // Вспомогательная функция для вывода массива
void printArray(int arr[], int size) {
    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int SIZE = 5;
    int arr[SIZE];

    cout << "Введите " << SIZE << " элементов массива:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    printArray(arr, SIZE);

    double average = calculateAverage(arr, SIZE);
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}
*/
// Home Work 4.6 ( срок 19.10.2025 )
/*
void analyzeArray(int arr[], int size) 
{
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    cout << "Результаты анализа массива:" << endl;
    cout << "Положительных элементов: " << positive << endl;
    cout << "Отрицательных элементов: " << negative << endl;
    cout << "Нулевых элементов: " << zero << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int SIZE = 6;
    int arr[SIZE] = { 3, -2, 0, 7, -1, 0 };

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    analyzeArray(arr, SIZE);

    return 0;
}
*/
// Shop ( срок 24.10.2025 )
/*

// Структура для хранения информации о товаре
struct Product 
{
    string name;
    double price;
    string category;
    int quantity;
};

// Константы цен
const double APPLE_JUICE_PRICE = 150.0;
const double ORANGE_JUICE_PRICE = 180.0;
const double APRICOT_JUICE_PRICE = 170.0;
const double PEAR_JUICE_PRICE = 160.0;
const double TOMATO_JUICE_PRICE = 120.0;
const double ONION_JUICE_PRICE = 90.0;
const double CUCUMBER_JUICE_PRICE = 110.0;
const double GARLIC_TEA_PRICE = 130.0;
const double PARSLEY_TEA_PRICE = 140.0;

// Глобальный ассортимент товаров
const Product ASSORTMENT[] = 
{
    {"Яблочный сок", APPLE_JUICE_PRICE, "Фруктовые", 0},
    {"Апельсиновый сок", ORANGE_JUICE_PRICE, "Фруктовые", 0},
    {"Абрикосовый сок", APRICOT_JUICE_PRICE, "Фруктовые", 0},
    {"Грушевый сок", PEAR_JUICE_PRICE, "Фруктовые", 0},
    {"Томатный сок", TOMATO_JUICE_PRICE, "Овощные", 0},
    {"Луковый сок", ONION_JUICE_PRICE, "Овощные", 0},
    {"Огуречный сок", CUCUMBER_JUICE_PRICE, "Овощные", 0},
    {"Чесночный чай", GARLIC_TEA_PRICE, "Чаи", 0},
    {"Петрушечный чай", PARSLEY_TEA_PRICE, "Чаи", 0}
};
const int ASSORTMENT_SIZE = 9;

// Функции для работы с программой
void displayAssortment();
void addToCart(Product cart[], int& cartSize);
void displayCart(Product cart[], int cartSize);
double calculateBaseTotal(Product cart[], int cartSize);
double calculateParsleyTeaDiscount(Product cart[], int cartSize);
double calculateTotalDiscount(Product cart[], int cartSize);
double calculateOnionJuiceDiscount(Product cart[], int cartSize);
double calculateFinalTotal(Product cart[], int cartSize, double& totalDiscount);
void processPayment(Product cart[], int& cartSize);
void clearCart(Product cart[], int& cartSize);

// Основная функция
int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int MAX_PRODUCTS = 50;
    Product cart[MAX_PRODUCTS];
    int cartSize = 0;
    int choice;

    do 
    {
        system("cls");
        cout << "=== МАГАЗИН 'СОКИ ИМАНА' ===" << endl;
        cout << "1. Показать ассортимент и добавить товары" << endl;
        cout << "2. Просмотреть корзину" << endl;
        cout << "3. Рассчитать итог и оплатить" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            displayAssortment();
            addToCart(cart, cartSize);
            break;
        case 2:
            displayCart(cart, cartSize);
            break;
        case 3:
            if (cartSize > 0) 
            {
                double totalDiscount = 0;
                double finalTotal = calculateFinalTotal(cart, cartSize, totalDiscount);

                cout << fixed << setprecision(2);
                cout << "\n=== ИТОГОВЫЙ ЧЕК ===" << endl;
                cout << "Сумма: " << finalTotal + totalDiscount << " руб." << endl;
                if (totalDiscount > 0) 
                {
                    cout << "Скидка: " << totalDiscount << " руб." << endl;
                }
                cout << "К оплате: " << finalTotal << " руб." << endl;

                processPayment(cart, cartSize);
            }
            else 
            {
                cout << "Корзина пуста!" << endl;
                Sleep(2000);
            }
            break;
        case 0:
            cout << "Спасибо за посещение!" << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
            Sleep(1000);
        }
    } while (choice != 0);

    return 0;
}

// Функция для отображения ассортимента
void displayAssortment() 
{
    system("cls");
    cout << "=== АССОРТИМЕНТ МАГАЗИНА ===" << endl;
    cout << "\n--- ФРУКТОВЫЕ СОКИ ---" << endl;
    for (int i = 0; i < 4; i++) 
    {
        cout << i + 1 << ". " << ASSORTMENT[i].name << " - " << ASSORTMENT[i].price << " руб./литр" << endl;
    }

    cout << "\n--- ОВОЩНЫЕ СОКИ ---" << endl;
    for (int i = 4; i < 7; i++) 
    {
        cout << i + 1 << ". " << ASSORTMENT[i].name << " - " << ASSORTMENT[i].price << " руб./литр" << endl;
    }

    cout << "\n--- ЧАИ ---" << endl;
    for (int i = 7; i < ASSORTMENT_SIZE; i++) 
    {
        cout << i + 1 << ". " << ASSORTMENT[i].name << " - " << ASSORTMENT[i].price << " руб./литр" << endl;
    }

    cout << "\nАКЦИИ:" << endl;
    cout << "- При покупке 3л петрушечного чая - скидка 5%" << endl;
    cout << "- При сумме чека > 1000 руб. - скидка 13%" << endl;
    cout << "- Каждый 4-й литр лукового сока - БЕСПЛАТНО!" << endl;
    cout << "===============================" << endl;
}

// Функция для добавления товара в корзину
void addToCart(Product cart[], int& cartSize) 
{
    const int MAX_PRODUCTS = 50;

    cout << "\n=== ДОБАВЛЕНИЕ ТОВАРОВ В КОРЗИНУ ===" << endl;

    int continueAdding = 1;
    while (continueAdding == 1 && cartSize < MAX_PRODUCTS) 
    {
        int productChoice, quantity;

        cout << "\nВыберите товар (1-" << ASSORTMENT_SIZE << "): ";
        cin >> productChoice;

        if (productChoice < 1 || productChoice > ASSORTMENT_SIZE) 
        {
            cout << "Неверный выбор товара!" << endl;
            continue;
        }

        cout << "Введите количество литров: ";
        cin >> quantity;

        if (quantity <= 0) 
        {
            cout << "Неверное количество!" << endl;
            continue;
        }

        // Создаем новый товар на основе ассортимента
        Product newProduct = ASSORTMENT[productChoice - 1];
        newProduct.quantity = quantity;

        // Добавляем в корзину
        cart[cartSize] = newProduct;
        cartSize++;

        cout << "Товар '" << newProduct.name << "' добавлен в корзину!" << endl;

        if (cartSize < MAX_PRODUCTS) 
        {
            cout << "\nДобавить еще товар? (1 - Да, 0 - Нет): ";
            cin >> continueAdding;
        }
        else 
        {
            cout << "Корзина заполнена!" << endl;
            continueAdding = 0;
        }
    }

    cout << "\nВозвращаемся в главное меню..." << endl;
    Sleep(2000);
}

// Функция для отображения корзины
void displayCart(Product cart[], int cartSize) 
{
    system("cls");
    cout << "=== ВАША КОРЗИНА ===" << endl;

    if (cartSize == 0) 
    {
        cout << "Корзина пуста!" << endl;
    }
    else 
    {
        double total = calculateBaseTotal(cart, cartSize);
        for (int i = 0; i < cartSize; i++) 
        {
            double itemTotal = cart[i].price * cart[i].quantity;
            cout << i + 1 << ". " << cart[i].name << " (" << cart[i].category << ")" << endl;
            cout << "   Количество: " << cart[i].quantity << " л." << endl;
            cout << "   Цена: " << cart[i].price << " руб./литр" << endl;
            cout << "   Сумма: " << itemTotal << " руб." << endl << endl;
        }
        cout << "Общая сумма: " << total << " руб." << endl;
    }

    cout << "\nНажмите любую клавишу для возврата...";
    system("pause > nul");
}

// Функция для расчета базовой суммы без скидок
double calculateBaseTotal(Product cart[], int cartSize) 
{
    double total = 0;
    for (int i = 0; i < cartSize; i++) 
    {
        total += cart[i].price * cart[i].quantity;
    }
    return total;
}

// Функция для расчета скидки на петрушечный чай
double calculateParsleyTeaDiscount(Product cart[], int cartSize) 
{
    double discount = 0;
    for (int i = 0; i < cartSize; i++) 
    {
        if (cart[i].name == "Петрушечный чай" && cart[i].quantity >= 3) 
        {
            discount = cart[i].price * cart[i].quantity * 0.05;
            cout << "Скидка на петрушечный чай: " << discount << " руб." << endl;
        }
    }
    return discount;
}

// Функция для расчета общей скидки при сумме чека > 1000 руб.
double calculateTotalDiscount(Product cart[], int cartSize) 
{
    double baseTotal = calculateBaseTotal(cart, cartSize);
    double discount = 0;

    if (baseTotal > 1000) 
    {
        discount = baseTotal * 0.13;
        cout << "Скидка 13% на весь чек: " << discount << " руб." << endl;
    }

    return discount;
}

// Функция для расчета скидки на луковый сок (каждый 4-й литр бесплатно)
double calculateOnionJuiceDiscount(Product cart[], int cartSize) 
{
    double discount = 0;
    for (int i = 0; i < cartSize; i++) 
    {
        if (cart[i].name == "Луковый сок") 
        {
            int freeLiters = cart[i].quantity / 4;
            if (freeLiters > 0) {
                discount = freeLiters * cart[i].price;
                cout << "Бесплатных литров лукового сока: " << freeLiters << " (скидка: " << discount << " руб.)" << endl;
            }
        }
    }
    return discount;
}

// Функция для расчета итоговой суммы со всеми скидками
double calculateFinalTotal(Product cart[], int cartSize, double& totalDiscount) 
{
    double baseTotal = calculateBaseTotal(cart, cartSize);
    double parsleyDiscount = calculateParsleyTeaDiscount(cart, cartSize);
    double totalPercentageDiscount = calculateTotalDiscount(cart, cartSize);
    double onionDiscount = calculateOnionJuiceDiscount(cart, cartSize);

    totalDiscount = parsleyDiscount + totalPercentageDiscount + onionDiscount;

    return baseTotal - totalDiscount;
}

// Функция для обработки оплаты
void processPayment(Product cart[], int& cartSize) 
{
    cout << "\n=== ОПЛАТА ===" << endl;
    cout << "1. Оплатить" << endl;
    cout << "2. Отмена" << endl;
    cout << "Выберите действие: ";

    int choice;
    cin >> choice;

    if (choice == 1) 
    {
        cout << "\nОПЛАТА ПРОШЛА УСПЕШНО!" << endl;
        cout << "Спасибо за покупку!" << endl;
        clearCart(cart, cartSize);
    }
    else 
    {
        cout << "\nОплата отменена." << endl;
    }

    cout << "\nВозвращаемся в главное меню..." << endl;
    Sleep(3000);
}

// Функция для очистки корзины
void clearCart(Product cart[], int& cartSize) 
{
    cartSize = 0;
    cout << "Корзина очищена." << endl;
}
*/
// ОСОБАЯ НЕДЕЛЯ 
/*

// Функция распределения динамической памяти
int* allocateMemory(int size) 
{
    if (size <= 0) 
    {
        cout << "Ошибка: размер массива должен быть положительным!" << endl;
        return nullptr;
    }
    return new int[size];
}

// Функция инициализации динамического массива
void initializeArray(int* arr, int size, int minValue = 1, int maxValue = 100) 
{
    if (arr == nullptr) 
    {
        cout << "Ошибка: массив не инициализирован!" << endl;
        return;
    }

    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
}

// Функция печати динамического массива
void printArray(const int* arr, int size) 
{
    if (arr == nullptr) 
    {
        cout << "Массив пуст!" << endl;
        return;
    }

    cout << "Динамический массив [" << size << "]: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i];
        if (i < size - 1) 
        {
            cout << ", ";
        }
    }
    cout << endl;
}

// Функция удаления динамического массива
void deleteArray(int*& arr) 
{
    if (arr != nullptr) 
    {
        delete[] arr;
        arr = nullptr;
        cout << "Память освобождена!" << endl;
    }
}

// Функция добавления элемента в конец массива
int* addElement(int* arr, int& size, int newElement) 
{
    int* newArr = allocateMemory(size + 1);

    if (newArr == nullptr) 
    {
        return arr; 
    }

    for (int i = 0; i < size; i++) 
    {
        newArr[i] = arr[i];
    }

    newArr[size] = newElement;
    size++;

    deleteArray(arr);

    return newArr;
}

// Функция вставки элемента по указанному индексу
int* insertElement(int* arr, int& size, int index, int newElement) 
{
    if (index < 0 || index > size) 
    {
        cout << "Ошибка: неверный индекс для вставки!" << endl;
        return arr;
    }

    int* newArr = allocateMemory(size + 1);

    if (newArr == nullptr) 
    {
        return arr;
    }

    for (int i = 0; i < index; i++) 
    {
        newArr[i] = arr[i];
    }

    newArr[index] = newElement;

    for (int i = index; i < size; i++) 
    {
        newArr[i + 1] = arr[i];
    }

    size++;

    // Удаляем старый массив
    deleteArray(arr);

    return newArr;
}

// Функция удаления элемента по указанному индексу
int* removeElement(int* arr, int& size, int index) 
{
    if (index < 0 || index >= size) 
    {
        cout << "Ошибка: неверный индекс для удаления!" << endl;
        return arr;
    }

    if (size == 1) 
    {
        deleteArray(arr);
        size = 0;
        return nullptr;
    }

    int* newArr = allocateMemory(size - 1);

    if (newArr == nullptr) 
    {
        return arr;
    }

    for (int i = 0; i < index; i++) 
    {
        newArr[i] = arr[i];
    }

    for (int i = index + 1; i < size; i++) 
    {
        newArr[i - 1] = arr[i];
    }

    size--;

    deleteArray(arr);

    return newArr;
}

// Работа всех функций
int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));

    int size = 5;
    int* dynamicArray = nullptr;

    cout << "=== ДЕМОНСТРАЦИЯ РАБОТЫ С ДИНАМИЧЕСКИМ МАССИВОМ ===" << endl;

    // 1. Распределение памяти
    cout << "\n1. Распределение памяти для массива из " << size << " элементов:" << endl;
    dynamicArray = allocateMemory(size);

    // 2. Инициализация массива
    cout << "\n2. Инициализация массива случайными числами:" << endl;
    initializeArray(dynamicArray, size);
    printArray(dynamicArray, size);

    // 3. Добавление элемента в конец
    cout << "\n3. Добавление элемента 999 в конец массива:" << endl;
    dynamicArray = addElement(dynamicArray, size, 999);
    printArray(dynamicArray, size);

    // 4. Вставка элемента по индексу
    cout << "\n4. Вставка элемента 777 на позицию 2:" << endl;
    dynamicArray = insertElement(dynamicArray, size, 2, 777);
    printArray(dynamicArray, size);

    // 5. Удаление элемента по индексу
    cout << "\n5. Удаление элемента с позиции 3:" << endl;
    dynamicArray = removeElement(dynamicArray, size, 3);
    printArray(dynamicArray, size);

    // 6. Добавление нескольких элементов
    cout << "\n6. Добавление нескольких элементов:" << endl;
    dynamicArray = addElement(dynamicArray, size, 111);
    dynamicArray = addElement(dynamicArray, size, 222);
    dynamicArray = addElement(dynamicArray, size, 333);
    printArray(dynamicArray, size);

    // 7. Вставка в начало
    cout << "\n7. Вставка элемента 555 в начало:" << endl;
    dynamicArray = insertElement(dynamicArray, size, 0, 555);
    printArray(dynamicArray, size);

    // 8. Удаление из начала
    cout << "\n8. Удаление первого элемента:" << endl;
    dynamicArray = removeElement(dynamicArray, size, 0);
    printArray(dynamicArray, size);

    // 9. Удаление из конца
    cout << "\n9. Удаление последнего элемента:" << endl;
    dynamicArray = removeElement(dynamicArray, size, size - 1);
    printArray(dynamicArray, size);

    // 10. Освобождение памяти
    cout << "\n10. Освобождение памяти:" << endl;
    deleteArray(dynamicArray);
    printArray(dynamicArray, size);

    cout << "\n11. Создание нового массива после удаления:" << endl;
    size = 3;
    dynamicArray = allocateMemory(size);
    initializeArray(dynamicArray, size, 10, 20);
    printArray(dynamicArray, size);
    deleteArray(dynamicArray);

    return 0;
}
*/


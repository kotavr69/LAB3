/**
* Задание 1 Вариант 11
*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int number1, number2, number3;
//    cout << "Введите первое число: ";
//    cin >> number1;
//    cout << "Введите второе число: ";
//    cin >> number2;
//    cout << "Введите третье число: ";
//    cin >> number3;
//    if ((number1 > 0) && (number2 > 0) && (number3 > 0)) {
//        cout << "истина" << endl;
//    }
//    else {
//        cout << "ложь" << endl;
//    }
//}


/**
* Задание 2 Вариант 11
*/
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    double number1, number2, number3;
//    cout << "Введите три числа: " << endl;
//    cin >> number1;
//    cin >> number2;
//    cin >> number3;
//    double mx, sum, sum_two;
//    mx = max({ number1, number2, number3 });
//    sum = number1 + number2 + number3;
//    sum_two = sum - mx;
//    cout << "Сумма двух наименьших чисел: " << sum_two;
//}


/**
* Задание 3 Вариант 11
*/
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    double a = 2.4, b = 1.3, x, y;
//    cout << "Введите х: ";
//    cin >> x;
//    if (x < -2) {
//        y = pow((a * x + 1), 4);
//        cout << "y = " << y;
//    }
//    else if (-2 <= x <= 5) {
//        y = 1 / (2 * pow(x, 2) + b * log10(x));
//        cout << "y = " << y;
//    }
//    else {
//        y = a * cos(pow((b + x), 2));
//        cout << "y = " << y;
//    }
//}


/**
* Задание 4 Вариант 11
*/
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int grade;
//    cout << "Введите свою оценку: ";
//    cin >> grade;
//    switch (grade) {
//    case 5:
//        cout << "отлично";
//        break;
//    case 4:
//        cout << "хорошо";
//        break;
//    case 3:
//        cout << "средне";
//        break;
//    }
//    if ((grade == 0) || (grade == 1) || (grade == 2)) {
//        cout << "хуже среднего";
//    }
//}


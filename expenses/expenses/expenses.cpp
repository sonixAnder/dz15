#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int expenses[7];
    string days[7] = { "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье" };

    int totalExpenses = 0;
    int count = 0;

    for (int i = 0; i < 7; i++) 
    {
        cout << "Введите сумму расхода (в долларах) за " << days[i] << ": ";
        cin >> expenses[i];

        totalExpenses += expenses[i];
        if (expenses[i] > 100) 
        {
            count++;
        }
    }
    cout << "-----------------------------" << endl;

    double averageExpenses = totalExpenses / 7.0;


    cout << "Средняя сумма расходов за неделю: $" << averageExpenses << endl;
    cout << "Общая сумма расходов за неделю: $" << totalExpenses << endl;
    cout << "Количество дней, когда сумма расходов превысила $100: " << count << endl;

    return 0;
}
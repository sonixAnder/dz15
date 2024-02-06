#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    vector<double> exchangeRates;
    vector<double> interestRates;
    double depositAmount;


    for (int i = 0; i < 12; i++) 
    {
        double exchangeRate;
        cout << "Введите курс доллара по отношению к евро за " << i + 1 << " месяц года: ";
        cin >> exchangeRate;
        exchangeRates.push_back(exchangeRate);

        double interestRate;
        cout << "Введите начисленные проценты за " << i + 1 << " месяц: ";
        cin >> interestRate;
        interestRates.push_back(interestRate);
    }

    cout << "Введите сумму на депозите в евро: ";
    cin >> depositAmount;

    int monthNumber;
    cout << "Введите номер месяца: ";
    cin >> monthNumber;


    double exchangeRate = exchangeRates[monthNumber - 1];
    double interestAmount = depositAmount * (interestRates[monthNumber - 1] / 100);
    double dollarAmount = exchangeRate * depositAmount + interestAmount;
    double maxCashAmount = min(interestAmount * 0.5, 500.0);

    cout << "Допустимая сумма для обналичивания: " << maxCashAmount << " долларов" << endl;

    return 0;
}

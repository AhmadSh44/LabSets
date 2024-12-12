#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string realtorName;
    double salesTotal;
    double extraBonus = 0.0;
    double bonusPercentage = 0.0;
    double bonusAmount = 0.0;
    double totalBonus = 0.0;

    cout << "Enter the realtor's name: ";
    getline(cin, realtorName);
    cout << "Enter the total sales for the period: $";
    cin >> salesTotal;

    if (salesTotal <= 300000) {
        extraBonus = 0;
        bonusPercentage = 0.03;
    } else if (salesTotal <= 400000) {
        extraBonus = 500;
        bonusPercentage = 0.0325;
    } else if (salesTotal <= 500000) {
        extraBonus = 1000;
        bonusPercentage = 0.033;
    } else if (salesTotal <= 600000) {
        extraBonus = 2000;
        bonusPercentage = 0.034;
    } else {
        extraBonus = 3000;
        bonusPercentage = 0.035;
    }
    
    bonusAmount = salesTotal * bonusPercentage;

    totalBonus = bonusAmount + extraBonus;

    cout << fixed << setprecision(2);
    cout << "\nSalesperson: " << realtorName << endl;
    cout << "Sales Total: $" << salesTotal << endl;
    cout << "Extra Bonus: $" << extraBonus << endl;
    cout << "Bonus Percentage: " << (bonusPercentage * 100) << "%" << endl;
    cout << "Bonus Amount: $" << bonusAmount << endl;
    cout << "Total Bonus: $" << totalBonus << endl;

    return 0;
}

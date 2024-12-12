#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // define variables
    string realtorName;
    double salesTotal;
    double extraBonus = 0.0;
    double bonusPercentage = 0.0;
    double bonusAmount = 0.0;
    double totalBonus = 0.0;

    // prompt user for and store realtor's name
    cout << "Enter the realtor's name: ";
    getline(cin, realtorName);

    // prompt user for sales total for previous period
    cout << "Enter the total sales for the period: $";
    cin >> salesTotal;

    // determine extra bonus and bonus percentage per table given
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

    // calculate bonus amount
    bonusAmount = salesTotal * bonusPercentage;

    // calculate total bonus (bonus amount + extra bonus)
    totalBonus = bonusAmount + extraBonus;

    // display results for salesperson in dollars and cents
    cout << fixed << setprecision(2); // set precision to two decimal places
    cout << "\nSalesperson: " << realtorName << endl;
    cout << "Sales Total: $" << salesTotal << endl;
    cout << "Extra Bonus: $" << extraBonus << endl;
    cout << "Bonus Percentage: " << (bonusPercentage * 100) << "%" << endl;
    cout << "Bonus Amount: $" << bonusAmount << endl;
    cout << "Total Bonus: $" << totalBonus << endl;

    return 0;
}

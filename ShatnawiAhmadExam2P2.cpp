// Ahmad Shatnawi

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
    string name;
    double sales, extraBonus = 0.0, bonusPercentage = 0.0, bonusSubtotal = 0.0, totalBonus = 0.0;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "What was the sales total for the previous period? ";
    cin >> sales;
    if (sales <= 300000) {
        extraBonus = 0;
        bonusPercentage = 0.03; 
    } else if (sales <= 400000) {
        extraBonus = 500;
        bonusPercentage = 0.0325; 
    } else if (sales <= 500000) {
        extraBonus = 1000;
        bonusPercentage = 0.033; 
    } else if (sales <= 600000) {
        extraBonus = 2000;
        bonusPercentage = 0.034; 
    } else {
        extraBonus = 3000;
        bonusPercentage = 0.035; 
    }

    double baseSales = sales + extraBonus;
    bonusSubtotal = baseSales * bonusPercentage;
    totalBonus = bonusSubtotal + extraBonus;

 
    cout << fixed << setprecision(2); 
    cout << "\nSales and bonus for previous period – " << name << endl;
    cout << "Sales: " << sales << endl;
    cout << "Extra Bonus: $" << extraBonus << endl;
    cout << "Bonus percentage: " << bonusPercentage * 100 << "%" << endl;
    cout << "Bonus subtotal amount: $" << bonusSubtotal << endl;
    cout << "Total bonus: $" << totalBonus << endl;

    return 0;
}

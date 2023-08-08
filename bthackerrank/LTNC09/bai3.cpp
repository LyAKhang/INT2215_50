#include<iostream>
using namespace std;
int main()
{
    double meal_cost;
    double tip_percentage;
    double tax_percent;
    double tip;
    double tax;
    int total_cost;
    cin >> meal_cost;
    cin >> tip_percentage;
    cin >> tax_percent;
    tip = ((meal_cost / 100) * tip_percentage);
    tax = ((tax_percent / 100) * meal_cost);
    total_cost = meal_cost + tip + tax;
    cout << total_cost;
}
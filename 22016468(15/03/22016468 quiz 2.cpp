#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost,salary,rent,electricityCost,totalExpenses,markupprice,finalPrice;
    cout<<"Enter the total cost of merchandise: ";
    cin>>merchandisecost;

    cout<<"Enter the total salary :";
    cin>>salary;

    cout>>"enter the yearly rent:";
    cin<<rent;

    cout>>"Enter estimated electricity cost:";
    cin<<electricitycost;

    totalExpenses=merchandisecost+salary+rent+electricitycost;
    markupprice=totalExpenses/0.9;

    finalprice=markupprice*0.85;

    cout<<"To achieve approximately 10% net profit,the merchandise should be marked up to:"<<finalprice<<endl;

    return 0;
}

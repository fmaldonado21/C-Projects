//Francisco Maldonado
//CSCI 1010
//Project 1

#include<iostream>
using namespace std;

int main()
{
    int order, NumofOrders;
    double total;

    while(true)
    {
        cout << "--Welcome to McDonalds!--" << endl;
        
        cout << "--Menu--" << endl;
        

        cout << "1. Big Mac    4.39" << endl;
        cout << "2. Cheeseburger 1.48" << endl;
        cout << "3. 10 McNuggets    4.09" << endl;
        cout << "4. McChicken    1.53" << endl;
        cout << "5. Crispy Chicken Sandwich    3.95" << endl;

        cout << "--McSides--";
        cout << endl;

        cout << "6. French Fries    2.06" << endl;
        cout << "7. Apple Slices    1.00" << endl;
        cout << endl;

        cout << "--Beverages & Drinks--";
        cout << endl;

        cout << "8. Soft Drink    1.00" << endl;
        cout << "9. Strawberry Banana Smoothie    2.00" << endl;
        cout << "10. Iced Latte    1.49" << endl;
        cout << endl;

        cout << "--Press 0 to end order--";
        cout << endl;
        cout << endl;

        while(true)
        {
            cout << "Select your order: ";
            cin >> order;
            if(order ==0)
            {
                cout << "Your total price is " << total << endl;
                cout  << "Thank you! " << endl;
                break;
            }
            cout << "amount of orders: ";
            cin >> NumofOrders;
            cout << NumofOrders;

            switch(order)
            {
                case 1:
                total += 4.39*NumofOrders;
                break;
                case 2:
                total += 1.48*NumofOrders;
                break;
                case 3:
                total += 4.09*NumofOrders;
                break;
                case 4:
                total += 1.53*NumofOrders;
                break;
                case 5:
                total += 3.95*NumofOrders;
                break;
                case 6:
                total += 2.06*NumofOrders;
                break;
                case 7:
                total += 1.00*NumofOrders;
                break;
                case 8:
                total += 1.00*NumofOrders;
                break;
                case 9:
                total += 2.00*NumofOrders;
                break;
                case 10:
                total += 1.49*NumofOrders;
                break;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

class HotelManagementSystem {
private:
    int Qrooms;
    int Qpasta;
    int Qburger;
    int Qnoodles;
    int Qshake;
    int Qchicken;
    int Srooms;
    int Spasta;
    int Sburger;
    int Snoodles;
    int Sshake;
    int Schicken;
    int Total_rooms;
    int Total_pasta;
    int Total_burger;
    int Total_noodles;
    int Total_shake;
    int Total_chicken;

public:
    HotelManagementSystem() {
        Qrooms = 0;
        Qpasta = 0;
        Qburger = 0;
        Qnoodles = 0;
        Qshake = 0;
        Qchicken = 0;
        Srooms = 0;
        Spasta = 0;
        Sburger = 0;
        Snoodles = 0;
        Sshake = 0;
        Schicken = 0;
        Total_rooms = 0;
        Total_pasta = 0;
        Total_burger = 0;
        Total_noodles = 0;
        Total_shake = 0;
        Total_chicken = 0;
    }

    void initializeQuantities() {
        cout << "\n\t Quantity of Items we have ";
        cout << "\n Rooms Available : ";
        cin >> Qrooms;
        cout << "\n Quantity of Pasta : ";
        cin >> Qpasta;
        cout << "\n Quantity of Burger : ";
        cin >> Qburger;
        cout << "\n Quantity of Noodles : ";
        cin >> Qnoodles;
        cout << "\n Quantity of Shake : ";
        cin >> Qshake;
        cout << "\n Quantity of Chicken-roll : ";
        cin >> Qchicken;
    }

    void processOrder() {
        int choice;
        while (true) {
            cout << "\n\t\t\t Please Select From The Menu Options ";
            cout << "\n\n 1) Rooms ";
            cout << "\n 2) Pasta ";
            cout << "\n 3) Burger ";
            cout << "\n 4) Noodles ";
            cout << "\n 5) Shake ";
            cout << "\n 6) Chicken-roll ";
            cout << "\n 7) Information Regarding Sales and Collection ";
            cout << "\n 8) Exit ";

            cout << "\n\n Please Enter Your Choice! ";
            cin >> choice;

            switch (choice) {
                case 1:
                    orderRooms();
                    break;

                case 2:
                    orderPasta();
                    break;

                case 3:
                    orderBurger();
                    break;

                case 4:
                    orderNoodles();
                    break;

                case 5:
                    orderShake();
                    break;

                case 6:
                    orderChickenRoll();
                    break;

                case 7:
                    displaySalesInfo();
                    break;

                case 8:
                    exit(0);
                    break;

                default:
                    cout << "\n\n Please Select The Number Mentioned above! \n";
            }
        }
    }

    void orderRooms() {
        int Quant;
        cout << "\n\n Enter The Number Of Rooms You Want : ";
        cin >> Quant;
        if (Qrooms - Srooms >= Quant) {
            Srooms += Quant;
            Total_rooms += Quant * 1200;
            cout << "\n\n \t\t " << Quant << " Room/Rooms have been Allocated to you ";
        } else
            cout << "\n\t Only " << Qrooms - Srooms << " Rooms Remaining in Hotel ";
    }

    void orderPasta() {
        int Quant;
        cout << "\n\n Enter Pasta Quantity : ";
        cin >> Quant;
        if (Qpasta - Spasta >= Quant) {
            Spasta += Quant;
            Total_pasta += Quant * 250;
            cout << "\n\n \t\t " << Quant << " Pasta is The Order! ";
        } else
            cout << "\n\t Only " << Qpasta - Spasta << " Pasta Remaining in Hotel ";
    }

    void orderBurger() {
        int Quant;
        cout << "\n\n Enter Burger Quantity : ";
        cin >> Quant;
        if (Qburger - Sburger >= Quant) {
            Sburger += Quant;
            Total_burger += Quant * 120;
            cout << "\n\n \t\t " << Quant << " Burger is The Order! ";
        } else
            cout << "\n\t Only " << Qburger - Sburger << " Burger Remaining in Hotel ";
    }

    void orderNoodles() {
        int Quant;
        cout << "\n\n Enter Noodles Quantity : ";
        cin >> Quant;
        if (Qnoodles - Snoodles >= Quant) {
            Snoodles += Quant;
            Total_noodles += Quant * 140;
            cout << "\n\n \t\t " << Quant << " Noodles is The Order! ";
        } else
            cout << "\n\t Only " << Qnoodles - Snoodles << " Noodles Remaining in Hotel ";
    }

    void orderShake() {
        int Quant;
        cout << "\n\n Enter Shake Quantity : ";
        cin >> Quant;
        if (Qshake - Sshake >= Quant) {
            Sshake += Quant;
            Total_shake += Quant * 120;
            cout << "\n\n \t\t " << Quant << " Shake is The Order! ";
        } else
            cout << "\n\t Only " << Qshake - Sshake << " Shake Remaining in Hotel ";
    }

    void orderChickenRoll() {
        int Quant;
        cout << "\n\n Enter Chicken-roll Quantity : ";
        cin >> Quant;
        if (Qchicken - Schicken >= Quant) {
            Schicken += Quant;
            Total_chicken += Quant * 150;
            cout << "\n\n \t\t " << Quant << " Chicken-roll is The Order! ";
        } else
            cout << "\n\t Only " << Qchicken - Schicken << " Chicken-roll Remaining in Hotel ";
    }

    void displaySalesInfo() {
        cout << "\n\t\t Details of Sales and Collection ";

        cout << "\n\n Number of Rooms we had : " << Qrooms;
        cout << "\n\n Number of Rooms we gave for rent " << Srooms;
        cout << "\n\n Remaining Rooms : " << Qrooms - Srooms;
        cout << "\n\n Total Rooms Collection for The Day : " << Total_rooms;

        cout << "\n\n Number of Pastas we had : " << Qpasta;
        cout << "\n\n Number of Pastas we gave for rent " << Spasta;
        cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
        cout << "\n\n Total Pastas Collection for The Day : " << Total_pasta;

        cout << "\n\n Number of Burgers we had : " << Qburger;
        cout << "\n\n Number of Burgers we gave for rent " << Sburger;
        cout << "\n\n Remaining Burgers : " << Qburger - Sburger;
        cout << "\n\n Total Burgers Collection for The Day : " <<Total_burger;
        
        cout << "\n\n Number of Noodles we had : " << Qnoodles;
        cout << "\n\n Number of Noodles we gave for rent " << Snoodles;
        cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles Collection for The Day : " << Total_noodles;

        cout << "\n\n Number of Shakes we had : " << Qshake;
        cout << "\n\n Number of Shakes we gave for rent " << Sshake;
        cout << "\n\n Remaining Shakes : " << Qshake - Sshake;
        cout << "\n\n Total Shakes Collection for The Day : " << Total_shake;

        cout << "\n\n Number of Chicken-roll we had : " << Qchicken;
        cout << "\n\n Number of Chicken-roll we gave for rent " << Schicken;
        cout << "\n\n Remaining Chicken-roll : " << Qchicken - Schicken;
        cout << "\n\n Total Chicken-roll Collection for The Day : " << Total_chicken;

        cout << "\n\n\n \t\t Total Collection for Today : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        cout << "\n\n";
    }
};

int main() {
    HotelManagementSystem hms;
    hms.initializeQuantities();
    hms.processOrder();
    return 0;
}

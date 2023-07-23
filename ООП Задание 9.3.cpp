// Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#include <iostream>
#include<string>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    
    string Name, Seri, Iss;
    int Num = 0;
    
            Passport ID;
            ForeignPassport FID;

            cout << endl;
            ID.Output();
        
            cout << endl;
            FID.Output();
        
}

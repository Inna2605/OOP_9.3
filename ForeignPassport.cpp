// Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#include<iostream>
#include<string>
#include "ForeignPassport.h"
#include "Passport.h"

int s;

ForeignPassport::ForeignPassport()
{
	Series = "CD";
	Number = 98765;
	Issue = "02.11.2021";
	ForeignCountrys = "Англия";
    ForeignDateVisit = "25.05.2022";
	ForeignDateDeparture = "01.06.2022";
}

void ForeignPassport::Output()
{
	cout << "Данные загранпаспорта:"
		<< "\nФИО: " << FullName
		<< "\nСерия: " << Series
		<< "\nНомер: " << Number
		<< "\nДата выдачи: " << Issue
		<< "\nСтрана, которую Вы посетили:\n"
		<< ForeignCountrys
		<< "\nДата посещения этой страны:\n"
		<< ForeignDateVisit
		<< "\nДата когда Вы выехали из этой страны:\n"
		<< ForeignDateDeparture;

	cout << endl;
}

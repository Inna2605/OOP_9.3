// Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#pragma once
#include<iostream>
using namespace std;
class Passport
{
protected:
	string Series;
	int Number;
	string FullName;
	string Issue;
public:
	Passport();
	void Output();
};


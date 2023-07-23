// Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#pragma once
#include "Passport.h"
class ForeignPassport : public Passport
{
private:
	string ForeignCountrys;
	string ForeignDateVisit;
	string ForeignDateDeparture;
public:
	ForeignPassport();
	void Output();
};


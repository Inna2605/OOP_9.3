// �������� ����� Passport (�������), ������� ����� ��������� ���������� ���������� � ���������� �������.
//� ������� ��������� ������������ ���������� ����� ForeignPassport(�������������), ����������� �� Passport.
//��������, ��� ������������� �������� ������ ���������� ������ ����� ������ � �����, ����� ��������������.

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


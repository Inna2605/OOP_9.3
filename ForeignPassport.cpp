// �������� ����� Passport (�������), ������� ����� ��������� ���������� ���������� � ���������� �������.
//� ������� ��������� ������������ ���������� ����� ForeignPassport(�������������), ����������� �� Passport.
//��������, ��� ������������� �������� ������ ���������� ������ ����� ������ � �����, ����� ��������������.

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
	ForeignCountrys = "������";
    ForeignDateVisit = "25.05.2022";
	ForeignDateDeparture = "01.06.2022";
}

void ForeignPassport::Output()
{
	cout << "������ ��������������:"
		<< "\n���: " << FullName
		<< "\n�����: " << Series
		<< "\n�����: " << Number
		<< "\n���� ������: " << Issue
		<< "\n������, ������� �� ��������:\n"
		<< ForeignCountrys
		<< "\n���� ��������� ���� ������:\n"
		<< ForeignDateVisit
		<< "\n���� ����� �� ������� �� ���� ������:\n"
		<< ForeignDateDeparture;

	cout << endl;
}

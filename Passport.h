// �������� ����� Passport (�������), ������� ����� ��������� ���������� ���������� � ���������� �������.
//� ������� ��������� ������������ ���������� ����� ForeignPassport(�������������), ����������� �� Passport.
//��������, ��� ������������� �������� ������ ���������� ������ ����� ������ � �����, ����� ��������������.

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


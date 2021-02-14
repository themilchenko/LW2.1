#pragma once

class String
{

private:

	char* symbols;     /*��������� �� char*/
	int length;

public:

	/*����������� �� ���������*/
	String() : symbols(nullptr), length(0) { };

	/*����������� �����������*/
	String(const String& string);

	/*����������� � ����������� (char*) */
	String(const char* str);

	/*����������*/
	~String();

	/*�������� ������������ ������������*/
	String& operator=(const String& string);

	/*�������� ���������*/
	bool operator==(const String& string);

	/*������� �������� ����� ������*/
	int get_size(char* string);
	int get_length();

	/*������� ������ ���������*/
	int find(char a);

	/*������� ������ ������ ������� �� ������*/
	void replace(char a, char b);

	/*�������� [] (��������� ������� �� �������)*/
	char operator[](int index);

	/*�������� + (������������ �����)*/
	String& operator+(const String& string);

	/*�������� ������ <<*/
	friend std::ostream& operator<<(std::ostream& output, String& str);

	/*�������� ����� >>*/
	friend std::istream& operator>>(std::istream& input, String& str);
};

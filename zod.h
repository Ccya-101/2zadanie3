#ifndef zodiak1_H
#define zodiak1_H
int main()
{
	setlocale(0, "");
	while (true)
	{
		int y; std::cout << "������� ��� : "; std::cin >> y;
		if (y <= 0) break;
		int k = (y + 4) % 12;

		const char* const m[] =
		{ "�������" ,
			"����"    ,
			"������"  ,
			"����"    ,
			"��������",
			"������"  ,
			"������"  ,
			"������"  ,
			"�����"   ,
			"����"    ,
			"�����"   ,
			"�������"
		};

		std::cout << "��� " << m[k] << '\n';
	}
	return 0;
}
#endif
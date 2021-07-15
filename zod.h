#ifndef zodiak1_H
#define zodiak1_H
int main()
{
	setlocale(0, "");
	while (true)
	{
		int y; std::cout << "Введите год : "; std::cin >> y;
		if (y <= 0) break;
		int k = (y + 4) % 12;

		const char* const m[] =
		{ "Дракона" ,
			"Змеи"    ,
			"Лошади"  ,
			"Козы"    ,
			"Обезьяны",
			"Петуха"  ,
			"Собаки"  ,
			"Свиньи"  ,
			"Крысы"   ,
			"Быка"    ,
			"Тигра"   ,
			"Кролика"
		};

		std::cout << "Год " << m[k] << '\n';
	}
	return 0;
}
#endif
#include <iostream>
#include <cmath>
#include "TempaData.h"
#include "Zodiak.h"
#include "week.h"
#include "zod.h"
using namespace std;
int main()
{

	int Date(int D, int M, int Y);
	int D, M, Y;
	int Day;
	string Month;
	char C;
	double zodiak = 0;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ����:\n";
	cin >> D >> C >> M >> C >> Y;

	int command;
	while (1) {
		cout << "Enter command:\n";
		cout << "1) ���� �������\n";
		cout << "2) ��� ����\n";
		cout << "3) ���� ������\n";
		cout << "4) �����������\n";
				cin >> command;
				switch (command) {
				case 1:

					if (Zodiakk(D, M, zodiak) == 1)
						cout << "Aries";
					else if (Zodiakk(D, M, zodiak) == 2)
						cout << "Taurus";
					else if (Zodiakk(D, M, zodiak) == 3)
						cout << "Gemini";
					else if (Zodiakk(D, M, zodiak) == 4)
						cout << "Cancer";
					else if (Zodiakk(D, M, zodiak) == 5)
						cout << "Leo";
					else if (Zodiakk(D, M, zodiak) == 6)
						cout << "Vergo";
					else if (Zodiakk(D, M, zodiak) == 7)
						cout << "Libra";
					else if (Zodiakk(D, M, zodiak) == 8)
						cout << "Scorpio";
					else if (Zodiakk(D, M, zodiak) == 9)
						cout << "Sagittarius";
					else if (Zodiakk(D, M, zodiak) == 10)
						cout << "Capticorn";
					else if (Zodiakk(D, M, zodiak) == 11)
						cout << "Aquarius";
					else if (Zodiakk(D, M, zodiak) == 12)
						cout << "Pisces";
					else {
						cout << "ERROR!";
					}
					return 0;
					break;
				//case 2:
					
		case 3:
		{	int D, M, Y;
		cout << "������� ��� ��� ����:\n";
			char C;
			string S[7] = { "�����������", "�����������", "�������", "�����", "�������", "�������", "�������" };
			cin >> D >> C >> M >> C >> Y;
			cout << S[Date(D, M, Y)] << endl;
			return 0;
		}
				break;
			case 4:
				cout << "������� ��� ��� ����:\n";
				cin >> Day;
				cin >> Month;
				 int Idinf = 0, Tempa = 0;
    if(Month == "jan" || Month == "dec" || Month == "feb"){ 
        Idinf = 1+rand()%+2; 
        Tempa = TemperatureData(D, Idinf); 
        cout<<D<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ������ ������. ������ ���������!"; 
    }
    else if(Month == "march" || Month == "april" || Month == "may"){ 
        Idinf = 3+rand()%+5;
        Tempa = TemperatureData(D, Idinf);
        cout<<D<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ��������. ���������� ������!";
    }
    else if(Month == "juny" || Month == "july" || Month == "aug"){ 
        Idinf = 6+rand()%+8;
        Tempa = TemperatureData(D, Idinf);
        cout<<D<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ����. ����� �� ����!";
    }
    else if(Month == "sep" || Month == "oct" || Month == "nov"){ 
        Idinf = 9+rand()%+11;
        Tempa = TemperatureData(D, Idinf);
        cout<<D<<"-�� "<<Month<<" �� ����� "<<Tempa<<" �������� ������. �� ������ ����� ������? ";
    }
    else 
        cout<<"������������ ����!";
    return 0; 
				break;
					return 0;
		}
	}
}
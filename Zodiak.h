#ifndef Zodiak_H
#define Zodiak_H
double Zodiakk(int d, int m, double zodiak) {
	switch (m) {

	case 1:

		if (d < 20) zodiak = 10;

		else zodiak = 11;

		break;

	case 2:

		if (d < 19) zodiak = 11;

		else zodiak = 12;

		break;

	case 3:

		if (d < 21) zodiak = 12;

		else zodiak = 1;

		break;

	case 4:

		if (d < 20) zodiak = 1;

		else zodiak = 2;

		break;

	case 5:

		if (d < 21) zodiak = 2;

		else zodiak = 3;

		break;

	case 6:

		if (d < 22) zodiak = 3;

		else zodiak = 4;

		break;

	case 7:

		if (d < 23) zodiak = 4;

		else zodiak = 5;

		break;

	case 8:

		if (d < 23) zodiak = 5;

		else zodiak = 6;

		break;

	case 9:

		if (d < 23) zodiak = 6;

		else zodiak = 7;

		break;

	case 10:

		if (d < 23) zodiak = 7;

		else zodiak = 8;

		break;

	case 11:

		if (d < 23) zodiak = 8;

		else zodiak = 9;

		break;

	case 12:

		if (d < 22) zodiak = 9;

		else zodiak = 10;

	}
	return zodiak;
}




#endif
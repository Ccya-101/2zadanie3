#ifndef TempaData_H
#define TempaData_H

int TemperatureData(int DataDay, int DataMonth) {
	int Temperature = 0;
	srand(DataDay);
	if (DataMonth > 12) {
		Temperature = -11 + rand() % +7;
	}
	else if (DataMonth >= 1 && DataMonth <= 2 || DataMonth == 12) {
		Temperature = -32 + rand() % -18;
	}
	else if (DataMonth >= 3 && DataMonth <= 5) {
		Temperature = -10 + rand() % +10;
	}
	else if (DataMonth >= 6 && DataMonth <= 8) {
		Temperature = 15 + rand() % +32;
	}
	return Temperature;
}

#endif
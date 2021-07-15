#ifndef week_H
#define week_H
int Date(int D, int M, int Y)

{
	int a, y, m, R;
	a = (14 - M) / 12;
	y = Y - a;
	m = M + 12 * a - 2;
	R = 7000 + (D + y + (y / 4) - (y / 100) + (y / 400) + (31 * m) / 12);
	return R % 7;
}
#endif
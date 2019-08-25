/*
NAMA : Michel Fang
NIM : 13518137
TANGGAL : Kamis, 22 Agustus 2019
Materi : Pengenalan Praktikum
*/
#include <stdio.h>

int main() {
	/* KAMUS */
	float t, ans;
	char c;
	
	/* ALGORITMA */
	scanf("%f %c", &t, &c);
	if (c == 'R') ans = 4.0 * t / 5.0;
	else if (c == 'F') ans = (9.0 / 5.0 * t) + 32;
	else ans = t + 273.15;
	printf("%.2f\n", ans);
	
	return 0;
}

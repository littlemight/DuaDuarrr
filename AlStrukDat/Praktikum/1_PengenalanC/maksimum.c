/*
NAMA : Michel Fang
NIM : 13518137
TANGGAL : Kamis, 22 Agustus 2019
Materi : Pengenalan Praktikum
*/
#include <stdio.h>

int main() {
	/* KAMUS */
	int a, b, c, fi, se, ans;
	
	/* ALGORITMA */
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b) fi = a;
	else fi = b;
	
	if (b >= c) se = b;
	else se = c;
	
	if (fi >= se) ans = fi;
	else ans = se;
	printf("%d\n", ans);
	
	return 0;
}

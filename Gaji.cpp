#include <stdio.h>
int main()
{
	int upah,jam,gaji;
	upah = 5000;
	printf("Masukan jumlah jam kerja dalam seminggu : ");
	scanf("%d",&jam);
	gaji=upah*jam*4;
	printf("Gaji karyawan bulan ini adalah RP%d",gaji);
}

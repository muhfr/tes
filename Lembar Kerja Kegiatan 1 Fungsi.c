#include <stdio.h>

int detikA,detikB,detikC;
float global_menitA,global_menitB,global_menitC,global_jamA,global_jamB,global_jamC,global_hariA,global_hariB,global_hariC;

float kategori_A(int detikA)
{
	float lokal_menitA=detikA/60.0;
	float lokal_jamA=lokal_menitA/60;
	float lokal_hariA=lokal_jamA/24;
	
	//konversi fungsi
	global_menitA=lokal_menitA;
	global_jamA=lokal_jamA;
	global_hariA=lokal_hariA;

	return detikA;
}

float kategori_B(int detikB)
{
	float lokal_menitB=detikB/60.0;
	float lokal_jamB=lokal_menitB/60;
	float lokal_hariB=lokal_jamB/24;
	
	//konversi fungsi
	global_menitB=lokal_menitB;
	global_jamB=lokal_jamB;
	global_hariB=lokal_hariB;
		
	return detikB;
}

float kategori_C(int detikC)
{		
	float lokal_menitC=detikC/60.0;
	float lokal_jamC=lokal_menitC/60;
	float lokal_hariC=lokal_jamC/24;
	
	//konversi fungsi
	global_menitC=lokal_menitC;
	global_jamC=lokal_jamC;
	global_hariC=lokal_hariC;
	
	return detikC;
}

int main()
{
	detikA=1244236;	// 311059*4
	detikB=1635474;	// 201910370311059/123456789
	detikC=512969;	// 201910+311059
    kategori_A(detikA);	
	kategori_B(detikB);	
	kategori_C(detikC);	
	printf("\n %d Detik A = %.5f Menit , %.5f Jam , %.5f Hari", detikA, global_menitA, global_jamA, global_hariA );
	printf("\n %d Detik B = %.5f Menit , %.5f Jam , %.5f Hari", detikB, global_menitB, global_jamB, global_hariB );
	printf("\n %d Detik C = %.5f Menit , %.5f Jam , %.5f Hari", detikC, global_menitC, global_jamC, global_hariC );
	return 0;
};


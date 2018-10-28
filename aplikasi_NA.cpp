#include <stdio.h>
#include <string.h>

struct data{char nama[20];
				int nis;
				int uh;
				int uts;
				int uas;
				float hasil;
				float rata;
			}nilaisiswa[20];

char index(float n)
	{
		if(n>=85 && n<=100)
			{
				printf("A");
			}
			else
			if (n>=70 && n<85)
			{
				printf("B");
			}
			else
			if (n>=50 && n<70)
			{
				printf("C");
			}
			else
			{
				printf("D");
			}
	}

main()
{
	char user[10];		//Deklarasi Variabel username utk login
	char pass[10];		//Deklarasi Variabel password utk login
	int tingkat;
	char kelas[3];
	
	login:
		printf("  =========================================\n");
		printf("       Portal Aplikasi Penilaian Akhir      \n");
		printf("  ---------   SMK N 99 GUMIWANG   ---------\n");
		printf("  =========================================\n\n");
		printf("  ===================================\n");
		printf("  |          Silakan Login          |\n");
		printf("  ===================================\n");
		printf("  Username	: "); scanf("%s",user);
		printf("  Password	: "); scanf("%s",pass);
	
	beranda:
	if (strcmp(user,"admin")==0 && strcmp(pass,"*******")==0)
	{
		printf("\n\n");
		printf("   Selamat Datang di Aplikasi Penilaian Akhir");
		printf("\n  ============================================\n");
		printf("  ---------------\n");
		printf("   Tingkat/Kelas \n");
		printf("  ---------------\n");
		printf("  1. Tingkat X \n");
		printf("  2. Tingkat XI \n");
		printf("  3. Tingkat XII \n");
		printf("\n  >> Tingkat/Kelas yang akan diinput nilainya : "); scanf("%d",&tingkat);
		printf("\n");
	}
	else 
	{
		printf("\n\n Username atau Password salah, silakan login kembali\n");
		goto login;	
		return 0;
	}

//=================================================================================

	switch(tingkat)
		{
		case 1:strcpy(kelas,"X"); break;
			goto program;
		
		case 2:strcpy(kelas,"XI"); break;
			goto program;
		
		case 3:strcpy(kelas,"XII"); break;
			goto program;
		}
		

//=================================================================================
	
	int jurusan;
	char ps[100];
	int a;			//deklarasi jumlah siswa yang akan diinput (banyaknya array)
	int i;
	
	
		beranda2:	
		printf("  -------------------\n");
		printf("   Program Keahlian\n");
		printf("  -------------------\n");
		printf("  1. Teknik Komputer & Jaringan\n");
		printf("  2. Teknik Gambar Bangunan\n");
		printf("  3. Teknik Kendaraan Ringan\n");
		printf("  4. Teknik Pemesinan\n");
		printf("  5. Teknik Instalasi Tenaga Listrik\n"); 
		printf("\n  >> Program Keahlian yang akan diinput nilainya : "); scanf("%d",&jurusan);
	
//=================================================================================
	
	program:	
	switch(jurusan)
	{
		case 1: 
			strcpy(ps,"Teknik Komputer & Jaringan");
			printf("\n  Program Keahlian : Teknik Komputer & Jaringan\n");
			goto menu;
		break;
		
		case 2:
			strcpy(ps,"Teknik Gambar Bangunan");
			printf("\n  Program Keahlian : Teknik Gambar Bangunan\n");
			goto menu;
		break;
		
		case 3:
			strcpy(ps,"Teknik Kendaraan Ringan");
			printf("\n  Program Keahlian : Teknik Kendaraan Ringan\n");
			goto menu;
		break;
		
		case 4:
			strcpy(ps,"Teknik Pemesinan");
			printf("\n  Program Keahlian : Teknik Pemesinan\n");
			goto menu;
		break;
		
		case 5:
			strcpy(ps,"Teknik Instalasi Tenaga Listrik");
			printf("\n  Program Keahlian : Teknik Instalasi Tenaga Listrik\n");
			goto menu;
		break;
	}
	
	menu:
	printf("\n  >> Masukkan Jumlah Siswa : "); scanf("%d",&a);
	for(i=1; i<=a; i++)
		{
			printf("  -----------------\n");
			printf("   Data siswa ke-%d\n",i);
			printf("  -----------------\n");
			printf("  Nama Siswa	: ");scanf("%s",&nilaisiswa[i].nama);
			printf("  NIS		: ");scanf("%d",&nilaisiswa[i].nis);
			printf("  Nilai UH	: ");scanf("%d",&nilaisiswa[i].uh);
			printf("  Nilai UTS	: ");scanf("%d",&nilaisiswa[i].uts);
			printf("  Nilai UAS	: ");scanf("%d",&nilaisiswa[i].uas);
			printf("\n");
			nilaisiswa[i].hasil = nilaisiswa[i].uh+nilaisiswa[i].uts+nilaisiswa[i].uas;
			nilaisiswa[i].rata = nilaisiswa[i].hasil/3;		
		}	
		
		
			printf("\n\n  Data nilai yang sudah diinputkan\n");
			printf("\n  Tingkat          : %s",kelas);
			printf("\n  Program Keahlian : %s",ps);
			printf(" \n  --------------------------------------------------------------------------\n");
			printf("    No ");
			printf("    Nama   ");
			printf("  NIS  ");
			printf(" UH ");
			printf(" UTS ");
			printf(" UAS ");
			printf(" Jumlah ");
			printf(" Rata-Rata ");
			printf(" Predikat ");
			printf("\n  --------------------------------------------------------------------------\n");
			

	for (i=1; i<=a; i++)
		{
			printf("    %d ",i);
			printf("     %s ",nilaisiswa[i].nama);
			printf("   %d ",nilaisiswa[i].nis);
			printf(" %d ",nilaisiswa[i].uh);
			printf(" %d ",nilaisiswa[i].uts);
			printf("  %d ",nilaisiswa[i].uas);
			printf("  %.0f  ",nilaisiswa[i].hasil);
			printf("     %.2f      ",nilaisiswa[i].rata);
			index(nilaisiswa[i].rata);
			printf("\n  --------------------------------------------------------------------------\n");
		}
		
		printf("\n");

			
		char loop;
		printf("\n  Apakah anda ingin memasukkan Nilai lagi? Y/N? : ");scanf("%s",&loop);
		printf("\n\n\n");
		while( loop=='y' || loop=='Y')
			{
				goto beranda;
			}
		goto login;
		printf("  Tekan sembarang tombol untuk Keluar ... "); scanf("%s");
		printf("\n\n");
		goto login;
		return 0;
}

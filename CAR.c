#include<stdio.h>
int i,k,tienG,tienPT,tienC,ptv,tienX,tienV;
int tr=1000000;
int thang=24*12;
float laiT,pTram=0.01,tienL;
void CAR()
{
	tienG=tienV/thang;
	printf("\n\t So tien goc ban phai tra hang thang la: %dd\n",tienG);
	printf("\n\t Lai suat co dinh hang nam cua ban la: 7.2%%\n");
	laiT=((7.2*100)/12)*pTram;
	printf("\n\t Lai suat hang thang cua ban la: %.1f%%\n",laiT);
	printf("\n\t  =================================== Thong ke so tien ban phai tra hang thang ==================================\n");
	printf("\n  \t  Ky han    \t Lai phai tra   \t  Goc phai tra   \t  Tien phai tra   \t  Tien goc cua moi ky han\n");
	printf("\n  \t  ==============================================================================================================\n");
	for(i=0;i<288;i++)
	{
		int Goc;
		k=(i+1)/12;
		Goc=tienG*i;
		tienC=tienV-Goc;
		tienL=(tienC*laiT*pTram);
		printf("\n\t%5d",i+1);
		printf("%22.0f",tienL);
		printf("%24d",tienG);
		tienPT=tienG+tienL;
		printf("%26d",tienPT);
		printf("%27d",tienC);
		if((i+1)%12==0)
		{
			printf("\n\t  ===========================================> Ket thuc ky han %d nam <===========================================",k);
		}
	}
	
}
void main()
{	
		printf("\n\t Nhap vao so tien cua xe: ");
		scanf("%d",&tienX);
		printf("\n\t So tien cua xe la: %dd\n",tienX*tr);
		printf("\n\t Nhap vao so phan tram vay toi da: ");
		scanf("%d",&ptv);
		printf("\n\t So phan tram vay ma ban da nhap la: %d%%\n",ptv);
		tienV=tienX*ptv*pTram*tr;
		printf("\n\t So tien ban muon vay trong ky han 24 nam la: %dd\n",tienV);
		if(tienG>500*tr )
		{
			printf("\n\t So tien ban muon vay vuot qua quy dinh !!!");
		}
		else
		{
			printf("\n\t So tien ban muon vay hop le \n");
			printf("\n\t So tien ban can tra truoc la: %dd\n" ,tienX*tr-tienV);
		}
		CAR();	
			


	
	
	
}


#include <stdio.h>

int FirstSrok0_30(int d, int ye){
	int s=ye;
	s=s/100*90;
	return s;
}

int SecondSrok31_120(int d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.02;
	if (d==2)p = 0.03;
	s=s+s*p;
	return s;
}

int ThirdSrok121_240(int d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.06;
	if (d==2)p = 0.08;
	s=s+s*p;
	return s;

}

int FourthSrok241_365(int d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.12;
	if (d==2)p = 0.15;
	s=s+s*p;
	return s;

}

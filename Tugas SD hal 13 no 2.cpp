#include <iostream>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
#include <math.h>
#define enter '\r'
#define tit '\a'
#define maks 100
using namespace std;
void garis()
{
  for (int a=1; a<=28; a++){
  printf("%s", "*");
  }
  printf("\n");
}
main()
{
  int a[maks];
  int i,varian,deviasi,x,j,total1, total2,rata_rata;
  total1=0;
  total2=0;
  printf("masukkan jumlah bilangan : ");
  scanf("%d", &x);
  printf("\n\n");
  for (i=0; i<x; i++)
  {
    printf("Masukkan bilangan ke-%d : ", i+1);
    scanf("%d", &a[i]);
    total1=total1+a[i];
    total2=total2+(a[i]*a[i]);

  }
  int main();
  printf("\a");
  printf("%-15s|%-5s|%-5s|\n", "Bilangan ke", "x", "x.x");
  garis();
  for(i=0; i<x; i++)
  {

    printf("%-15d|%-5d|%-5d|\n", i+1, a[i], a[i]*a[i]);
  }

  garis();
  printf("%-15s|%-5d|%-5d|\n", "total", total1, total2);
  garis();
  rata_rata=total1/x;
  varian=(total2-total1*total1/x)/x-1;
  deviasi=sqrt(varian);
  printf("%-15s|%-11d|\n", "Rata-rata", rata_rata);
  garis();
  printf("%-15s|%-11d|\n", "Varian", varian);
  garis();
  printf("%-15s|%-11d|\n", "Deviasi", deviasi);
  garis();
getch();
}


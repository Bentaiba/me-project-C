#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
  double larg =0,longu=0,surf=0,per=0,hey=-5.7;
  larg=fabs(hey);
  printf("%f\n",larg);
  larg=ceil(larg);
  printf("%f\n\n\n",larg);
  larg=pow(2,3);
  printf("%f\n\n",larg);
  printf("calculer la surface et le perimetre d un rectangle\n");
  printf("entrer le largeur de ce rectangle :");
  scanf("%lf",&larg);
  printf("entrer la longueur de ce rectangle :");
  scanf("%lf",&longu);
  surf=larg*longu;
  printf("la surface de ce rectangle est :%f\n",surf);
  per=(larg+longu)*2;
  printf("le perimetre de ce rectangle est :%lf\n",per);
  surf++;
  printf("%f\n",surf);
  surf+=3;
  printf("%f\n",surf);
  surf/=3;
  printf("et enfin voila %f\n\n",surf);
  printf("héééy it's C again xD ");
  printf("branch git ");
  //free1
    return 0;
}

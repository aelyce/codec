#include <stdio.h>
#include<string.h>
int main() {
    char name[60],*p=&name[0];
    int totalh, bit,i;
FILE *h = fopen("maaheroes.cfg","r+");
fscanf(h,"%d",&totalh);
for(i=0;i<totalh;i++){
                      fgets(name,50,h);
                      //scanf(h,"%[^\n]s", name[i]);
                      }
                      printf(p);

int fclose(FILE *h);
system("pause");
}

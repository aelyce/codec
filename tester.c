//
//  main.c
//  CProject
//
//  Created by Myreen Repizo on 4/11/13.
//  Copyright (c) 2013 MindBlown. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char *mygets(char *mystring, int size, FILE *stream);

int main()
{

    FILE *fp;
    fp = fopen("maaheroes.cfg", "r");
    if(fp==NULL)
    {
        printf("Does not read");
    }
    
    int totalh;
    
    mygets(fp, "%d", &totalh);
    
    printf("%d", totalh);
    
    fclose(fp);
    system("pause");
    
}
char *mygets (char *mystring, int size, FILE *stream)
{
			char *returnvalue;

			returnvalue = mygets(mystring, size, stream);
			if(mystring[strlen(mystring)-1] == 10)
				{
						mystring[strlen(mystring)-1] = 0;
				}
			return returnvalue;
}


#include <stdio.h>
#include <string.h>
#define MAX 1000
 
 

	void docnumber(){
		
		file*fp;
		fp=fopen("docstest.txt","w");
		
		fprintf(fp, "%d", 2);
		fclose;
		
		fp=("taomuc.text","r");
		if (fp==null){
			printf("khong the mo files");
			return;
		}
		
	}
	
	char ch;
	while((ch =getc(fp) != EOF)){
		printf("%c", ch);
	}
	
	fclose(fp);

    

    return 0;
}

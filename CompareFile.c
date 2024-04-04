#include <stdio.h>

int compare(FILE *fp1,FILE *fp2) {
    char ch1,ch2;

    while(((ch1=fgetc(fp1))!=EOF) && ((ch2=fgetc(fp2))!=EOF)) {
        if(ch1!=ch2) 
        return 0;//files are not identical
    }
    if(ch1==EOF && ch2==EOF)
    return 1;//files are identical as they reach EOF at same time
    else
    return 0;
}

int main(int argc,char *argv[]) {
    FILE *fp1,*fp2;

    fp1=fopen(argv[1],"r");
    if(fp1==NULL) {
        printf("Unable to open file 1");
        return 0;
    }

    fp2=fopen(argv[2],"w");
    if(fp2==NULL) {
        printf("Unable to open file 2");
        return 0;
    }

    int result=compare(fp1,fp2);
    printf("Result: %d",result);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

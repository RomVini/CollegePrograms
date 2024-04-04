#include <stdio.h>

int main(int argc,char *argv[]) {
    FILE *fp1,*fp2;//file pointers
    char ch;//to store characters in the file

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

    while((ch=fgetc(fp1))!=EOF) {
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}

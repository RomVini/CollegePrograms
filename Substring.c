#include <stdio.h>

int subs(char *s1,char *s2) {
    int len1=0,len2=0;
    while(s1[len1]!='\0')
        len1++;
    while(s2[len2]!='\0')
        len2++;

    for(int i=0;i<=len1-len2;i++) {
        int j;
        for(j=0;j<len2;j++) {
            if(s1[i+j]!=s2[j]) 
            break;
        }
        if(j==len2)
        return 1;//substring found
    }
    return 0;//substring not found
}

int main() {
    char s1[100],s2[100];
    printf("Enter parent string: ");
    fgets(s1,100,stdin);
    printf("Enter string to be checked: ");
    fgets(s2,100,stdin);
    int result=subs(s1,s2);
    
    if(result==1)
    printf("Substring found");
    else
    printf("Substring not found");

    return 0;
}

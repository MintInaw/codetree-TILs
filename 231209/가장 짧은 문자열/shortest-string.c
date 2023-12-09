#include <stdio.h>
#include <string.h>

int main() {

	char str1[21];
	char str2[21];
    char str3[21];
	

	scanf("%s", str1);
	scanf("%s", str2);
    scanf("%s", str3);
	

	int len1 = strlen(str1);
	int len2 = strlen(str2);
    int len3 = strlen(str3);

    int mx = len1;
    if(mx < len2) mx = len2;
    if(mx < len3) mx = len3;
    int mn = len1;
    if(mn > len2) mn = len2;
    if(mn > len3) mn = len3;

	printf("%d", mx - mn);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
char a[55];
int main() {
    unsigned long long s=0,t=1;
    int i,j,n;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++){
    	for(j=0;j<i;j++){
    		t=t*31;
    		t%=1234567891;
		}
    	s+=(a[i]-96)*t;
    	t=1;
	}
	printf("%llu",s%1234567891);
	return 0;
}

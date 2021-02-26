# 2020cce
程式設計
## 1.基礎:找零錢
```
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	printf("50*%d+",n/50);
	printf("5*%d+",n%50/5);
	printf("1*%d",n%50%5/1);
	printf("\n");
}
```
## 2.基礎:因數個數
```
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0) ans++; 
	}
	printf("%d\n",ans);
}
```

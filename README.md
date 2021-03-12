# 2020cce
程式設計
## 1.基礎:找零錢
```C
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
```C
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
## 3.基礎:找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],ans=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0) ans++;
	}
	printf("%d\n",ans);

}

```
## 4.基礎:基礎轉換為等級
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90) printf("A");
    else if(80<=n && n<90) printf("B");
    else if (60<=n && n<80) printf("C");
    else printf("F");
}

```
## 5.進階:分式化簡
```C
 #include <stdio.h>
 int main()
 {
     int a,b,temp;
     scanf("%d%d",&a,&b);
     if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0) temp=i;
        }
     }
     else if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0) temp=i;
        }
     }
     a=a/temp;
     b=b/temp;
     printf("%d%d",a,b);
 }
```


## 1. 利用 int *p 來改變 n1變數的值
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p= &n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3;)
}
```
## 2. 利用 int *p2 來改變 n3 變數的值
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p= &n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2= &n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## 3. 利用 p2=p 讓口袋的address位址換了一張, 所以 *p2=400 就會換到其他地方送400元
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p= &n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2= &n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}

```
## 01.老師示範 int *p = &a[2]; *p=222; p = p + 2; *p = 666;
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```
## 02.老師示範 int *p = &a[2]; *p=222; p = p + 2; *p = 666;p--; *p=555;
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0;i<5;i++) printf("%d",a[i]);
    printf("\n");
}
int main()
{
        printAll();
    int *p=&a[2];
    *p=222;
        printAll();
    p=p+2;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
}
```
## 03.老師把 int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看 printf("%d\n", p);
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0;i<5;i++) printf("%d",a[i]);
    printf("\n");
}
int main()
{
        printAll();
    int *p=&a[2];
    *p=222;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);
    p=p+2;
    p=666;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);
    p--;
    *p=555;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);
}

```
## 04. int * p; p = (int *) malloc( sizeof(int) * 10 );
```c
#include <stdio.h>
#include <stdio.h>

int a[10];
int main(){
    int b[10];

    int *p=(int*) malloc( sizeo(int)*10);

    return 0;


}

```

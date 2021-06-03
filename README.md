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
## 05.進階題：計算陣列的平方值
```c
#include <stdio.h>
int main()
{
	int N;
	int a[100];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");



}
```
## 06.進階題：大小寫轉換
```c
#include <stdio.h>
int main()
{
	int N;
	int a[100];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");



}
```
## 07.基礎題：計算幾週與幾天
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n-2000)/500*5+100+5);
	printf("\n");


}
```
## 08.基礎題：計程車資計算
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n-2000)/500*5+100+5);
	printf("\n");


}
```
## 09.基礎題：兩數間可被5整除的整數
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
		if(i%5==0) printf("%d\n",i);
		}
	}
	else if(a>b){
		for(int i=b;i<=a;i++){
		if(i%5==0) printf("%d\n",i);
	
		}
	
	
	}


}
```
## 10.基礎題：整數間最大距離
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&b<c) printf("%d",c-a);
	else if(a<c&&c<b) printf("%d",b-a);
	else if(b<a&&a<c) printf("%d",c-b);
	else if(b<c&&c<a) printf("%d",a-b);
	else if(c<a&&a<b) printf("%d",b-c);
	else printf("%d",a-c);
	printf("\n");







}
```
## 01.寫 struct的宣告、定義, 並宣告一個 struct 變數
```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a;
}
```
## 02.利用 C Tutor 及 CodeBlocks 示範 struct POINT a={4.1, 3.2}; 並利用 a.x 及 a.y 印出來
```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a{4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    return 0;
}
```
## 03.利用 C Tutor 及 CodeBlocks 示範, 接續上題, 再利用 a.x 及 a.y 來改變裡面的值
```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a{4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    
    
    
    return 0;
}
```
## 04.利用 C Tutor 及 CodeBlocks(配合printf) 示範 外面的global全域變數 會初始值, 裡面的 local區域變數會是亂碼。 然後我們把 local變數裡面用程式來塞值。
```c
#include <stdio.h>
struct DATA{
	int x,y;
}a[3];
struct DATA b={100,200};

int main()
{
	struct DATA c;
	c=b;
	
	return 0;
}
```
## 05.利用 C Tutor 及 CodeBlocks(配合printf) 示範, (結構)有個陣列、有個指標, 使用 p->x, p->y, p->z 取用到指標指到的值。
```c
#include <stdio.h>
struct POINT{
	float x,y,z;
};
struct POINT[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}}

int main()
{
	struct POINT *p
}
```
## 01.
```c
C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
chsr temp[10];
int compare ( const void * p1, const void * p2 ){
 char * s1 =(char*) p1;
 char * s2 =(char*) p2;
 return strcmp( s1,s2);
}
int main()
{
 int n;
 scanf("%d" ,&n);
 for(int i=0;i<n;i++){
  scanf("%s" ,line[i]);
 }
 qsort(line,n,10,compare);
 for(int i=0;i<n;i++){
  printf("%s\n" ,line[i]);
 }
}
```
## 第一題程式碼
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
chsr temp[10];
int compare ( const void * p1, const void * p2 ){
 char * s1 =(char*) p1;
 char * s2 =(char*) p2;
 return strcmp( s1,s2);
}
int main()
{
 int n;
 scanf("%d" ,&n);
 for(int i=0;i<n;i++){
  scanf("%s" ,line[i]);
 }
 qsort(line,n,10,compare);
 for(int i=0;i<n;i++){
  printf("%s\n" ,line[i]);
 }
}
```
## 第二題程式碼
```c
#include <stdio.h>
int f(int n)
{
 int p;
 int ans=0;
 
 while(n>0)
 {
  p=n%10;
  n=n/10;
  ans=ans*10+p;
 }
 return ans;
}
int main()
{
 int n;
 scanf("%d" ,&n);
 printf("%d\n" ,f(n));
}
```
## 第三題程式碼
```c
#include <stdio.h>
int main()
{
 int a[100];
 int r=0;
 for(int i=0;i<100;i++){
  scanf("%d" ,&a[i]);
  if(a[i]==0) break;
  r++;
 }
 int n;
 scanf("%d" ,&n);
 int ans=0;
 for(int i=0;i<r;i++){
  if(a[i]==n) ans++;
  }
  printf("%d\n",ans);
 }
```
## 第四題程式碼
```c
#include <stdio.h>
int f(int a,int b){
 if(a<b) return -1;
 else if(a==b) return 0;
 else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 第五題程式碼
```c
#include <stdio.h>
int main()
{
 printf("Enter an integer ( 999 to end ): \n");
 
 int n;
 scanf("%d" ,&n);
 int ans=0;
 while(n!=999)
 {
  ans=ans+n;
  printf("Enter an integer ( 999 to end ): \n");
  scanf("%d" ,&n);
 }
 printf("The total is: %d",ans);
}
```
## 第六題程式碼
```c
#include <stdio.h>
int main()
{
 int a,b;
 scanf("%d%d" ,&a,&b);
 printf("%d" ,a%b);
}
```
## 第七題程式碼
```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d" ,&n);
 if(n>=90) printf("A");
 else if(n<90 && n>=80) printf("B");
 else if(n<80 && n>=70) printf("C");
 else if(n<70 && n>=60) printf("D");
 else printf("F");
}
```
## 第八題程式碼
```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d" ,&n);
 printf("%d" ,100+((n-1500)/250)*5+5);
}
```
## 第九題程式碼
```c
#include <stdio.h>
int main()
{
 int n;
 scanf("%d" ,&n);
 printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,(n%50%10)/5,(n%50%10%5)/1);
}
```
## 01.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d",&n);
	char trash[80];
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(trash);
	}
	qsort(line,n,80,compare);
	
	int ans=1;
	printf("%s ",line[0]);
	for(int i=0;i<n-1;i++){
		if(strcmp(line[i],line[i+1])!=0){
		printf("%d\n",ans);
		printf("%s ",line[i+1]);
		ans=1;
		}else ans++;
	}
	printf("%d\n",ans);

}
```
## 01.
```c
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare ( const void *p1,const void *p2){
 return strcmp( (char*) p1,(char*) p2);
}
int main()
{
 int T;
 scanf("%d\n\n", &T);
 for(int t=0;t<T;t++){
  int N=0;
  while(gets(line)!=NULL){
   if( strcmp(line,"") == 0 )break;
   strcpy( tree[N],line);
   N++;
  }
  
  qsort( tree,N,32,compare);
  
  
  if(t>0) printf("\n");
  int ans=1;
  printf("%s ",tree[0]); 
  for(int i=0;i<N-1;i++){
   if( strcmp(tree[i],tree[i+1]) == 0){
    ans++;
   }else{
    printf("%.4f\n" ,100*ans/(float)N );
    ans=1;
    printf("%s " ,tree[i+1]);
   }
  }
  printf("%.4f\n",100*ans/(float)N);
 }
}
```

## 20210521
## 第一步倒數計時
```c
size(1024, 400)
background( 15,162,249 );
```
## 第二步倒數計時器
```c
void setup(){
size(1024, 400);
}
void draw(){
if(mousePressed)background( 255,0,255 );
else background( 15,162,249);
}
```
## 第三步倒數計時器
```c
void setup(){//只做一次設定
 size(1024, 400);
}
void draw(){//每秒狂做60次
  if(mousePressed)background( 255,0,255 );
  else background( 15,162,249);
  textSize(50);//字的大小 設50號字
  text(a,100,100);//將a在 100，100畫出來
}
int a=0;//外部變數
void mousePressed(){
  a++;
}
```
## 第四步倒數計時器
```c
void setup(){
  size( 1024, 400);
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();
  int m = minute();
  int s = second();
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);
}//      字串   數  字串  數   字串 數字
```
## 第五步倒數計時器
```c
void setup(){
  size( 1024, 400);
  textFont(  createFont ("標楷體",50) );
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,0,0);//填充墨水的色彩
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);//現在時間
  int total = h*60*60 + m*60 + s;//總秒數
  text( "總秒數:" + total, 100, 200);
}
```
## 第六步倒數計時器
```c
void setup(){
  size( 1024, 400);
  textFont(  createFont ("標楷體",50) );
}
void draw(){
  background( 15, 162, 249 );
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,0,0);//填充墨水的色彩
  text( "Now:" + h + ":" + m + ":" + s ,100 ,100);//現在時間
  int total = h*60*60 + m*60 + s;//現在時間的總秒數
  int total2=12*60*60 + 0*60 + 0;//目標時間的總秒數
  text( "總秒數:" + total, 100, 200);
  int ans = total2-total;
  int hh = ans/60/60%60, mm = ans/60%60, ss = ans%60;
  text( "還剩下:" + hh + ":" +mm + ":" + ss ,100,300);
}
```

##01.
```C
<!DOCTYPE html>
<html>
<body>

<h2>What Can JavaScript Do?</h2>

<p id="demo">JavaScript can change HTML attribute values.</p>

<p>In this case JavaScript changes the value of the src (source) attribute of an image.</p>

<button onclick="document.getElementById('myImage').src='pic_bulbon.gif'
     document.getElementById('demo').style.display='none'">
                 Turn on the light</button>

<img id="myImage" src="pic_bulboff.gif" style="width:100px">

<button onclick="document.getElementById('myImage').src='pic_bulboff.gif'
     document.getElementById('demo').style.display='block'">
                 Turn off the light</button>

</body>
</html
```



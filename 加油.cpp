include<math.h> 

include<studio.h> 

int add(int b[ ],int m,int n) { //求一个从m到n的数列的和 

int sb; 

for(int i=m;i<n;i ) 

sb =b[i]; 

return sb; 

}

 int Tanxin(int a[n], int N) //a[n]表示加油站的个数，N为加满油能行驶的最远距离 

{

 int b[n]; //若在a[i]加油站加油，则b[i]为1，否则为0 int m=0; if(a[i]>N) return ERROR; //如果某相邻的两个加油站间的距离大于N，则不能到达终点 

if(add(a[i], 0, n)<N) { //如果这段距离小于N，则不需要加油 

b[i]=0; return add(b[i],0,n);

 } 

if(a[i]==a[j]&&a[i]==N) { //如果每相邻的两个加油站间的距离都是N，则每个加油站都需要加油 

b[i]=1; 

return add(b[i],0,n); 

} 

if(a[i]==a[j]&&a[i]<N) { //如果每相邻的两个加油站间的距离相等且都小于N 

if( add(a[i],m,k) < N && add(a[i],m,k 1) > N ) { 

b[k]=1; 

m =k; 

} 

return add(b[i],0,n); 

} 

if(a[i]!=a[j]) { //如果每相邻的两个加油站间的距离不相等且都小于N 

if( add(a[i],m,k) < N && add(a[i],m,k 1) > N ) { 

b[k]=1; 

m =k; 

} 

return add(b[i],0,n); 

} 

viod main { 

int a; 

scanf('%d',a); 

scanf('/n'); 

scanf('/d',&N); 

Tanxin(a[ ],0,n); 

}

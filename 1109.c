/*

Q;
int yoko[5]={0}の意味が
わかりません
何を宣言しているのか
教えてください。

A;
int yoko[5] = {0};の中身を地道にプリントエフしてみてみますと
全部ゼロであることがわかります
つまり
配列をまとめて0で初期化する
そういう記述なのであります

*/

#include <stdio.h>

 int main()
 {
     int yoko[5] = {0};
     int tate[5] = {1,2,3,4,5};

     printf("yoko[0]の中身:%d\n",yoko[0]);
     printf("yoko[1]の中身:%d\n",yoko[1]);
     printf("yoko[2]の中身:%d\n",yoko[2]);
     printf("yoko[3]の中身:%d\n",yoko[3]);
     printf("yoko[4]の中身:%d\n\n",yoko[4]);

     printf("%d\n",tate[0]);
     printf("%d\n",tate[1]);
     printf("%d\n",tate[2]);
     printf("%d\n",tate[3]);
     printf("%d\n",tate[4]);

     return 0;
 } 

 
/////////////////////////////////////////////////////////////////////////////////////////

/*
このように
C言語では
配列は初期化すると
初期化の数値を指定してない値は0で初期化されます

後述のような
int yoko[5] = {1};
で全部1で初期化する
みたいなことはできないから注意してくださいねー
*/

#include <stdio.h>

 int main()
 {
     int yoko[5] = {1};
     int tate[5] = {1,2,3,4,5};

     for(int n=0; n<5; ++n)
     {
          printf("yoko[%d]の中身:%d\n",n,yoko[n]);
          printf("tate[%d]の中身%d\n",n,tate[n]);
     }

     return 0;
 }

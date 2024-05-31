#include <stdio.h>
#include <stdlib.h>
void clrscr()
{
    system("cls");

}

int main()
{
int x,y,area,p;
clrscr();
printf("tol v arz");
// clrscr();
scanf("%d%d",&x,&y);
area=x*y;
p=(x+y)*2;
printf("area=%d,p=%d",area,p);
    getch();
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
string ari(string s) 
{
float ch=0;
float wd=1;
float ss=0;
for(int i=0;i<strlen(s);i++)
{
if(isalnum(s[i]))
{
ch++;
}
else if(s[i]==' ')
{
wd++;
}
else if(s[i]=='.' || s[i]=='?' || s[i]=='!')
{
ss++;
}
}
float score=0;
score=(4.71*(ch/wd))+(0.5*(wd/ss))-21.43;
if(score<=1)
{
return "Kindergarten";
}
else if(score>1 && score<=2)
{
return "First/Second Grade";
}
else if(score>2 && score<=3)
{
return "Third Grade";
}
else if(score>3 && score<=4)
{
return "Fourth Grade";
}
else if(score>4 && score<=5)
{
return "Fifth Grade";
}
else if(score>5 && score<=6)
{
return "Sixth Grade";
}
else if(score>6 && score<=7)
{
return "Seventh Grade";
}
else if(score>7 && score<=8)
{
return "Eighth Grade";
}
else if(score>8 && score<=9)
{
return "Ninth Grade";
}
else if(score>9 && score<=10)
{
return "Tenth Grade";
}
else if(score>10 && score<=11)
{
return "Eleventh Grade";
}
else if(score>11 && score<=12)
{
return "Twelfth grade";
}
else if(score>12 && score<=14)
{
return "Professor";
}
}

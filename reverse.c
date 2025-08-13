void main()
{
int s=0,x,y,r;

printf("Enter a Number:");
scanf("%d",&x);

while(x!=0)
{
r=x%10;
s=(s*10)+r;
x=x/10;

}
printf("Reverse Number is %d",s);

}
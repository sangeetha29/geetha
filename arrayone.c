
int main(void) 
{
int n[100],m[100],i,j,p,l=0,r,sum[100],m[100];
scanf("%d",&p);
for(i=0;i<n;i++)
{
scanf("%d",&n[i]);
m[i]=n[i];
}
for(i=0;i<n;i++)
{
while(n[i]>0)
{
r=n[i]%2;
sum[l++]=r;
n[i]=n[i]/2;
if(sum[l]==1)
{
count++;
}
m[i]=count;
l=0;count=0;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(m[i]>m[j])
{
temp=n[i];
n[i]=n[j];
n[j]=temp;
temp1=m[i];
m[i]=m[j];
m[j]=temp1;
}
else if(m[i]==m[i+1])
{
if(n[i>n[j])
{
tem=n[i];
n[i]=n[j];
n[j]=tem;
}}}}
for(i=0;i<n;i++)
{
printf("%d",n[i]);
}
return 0;
}

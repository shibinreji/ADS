#include<stdio.h>
void main()
{
int i,a[100],n,key,f;
printf("Enter the size of the array:\n");
scanf("%d",&n);
printf("Enter %d elements:",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be search\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
 if (a[i]==key)
 {
  f=i;
  break;
 }
 else
 {
  f=-1;
 }
}
if(f==i)
 {
  printf("The element is  %d found in %d position\n",a[i],i);
 }
else
 {
  printf("Element is not found\n");
 }

}


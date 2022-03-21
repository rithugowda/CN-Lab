#include<stdio.h>
int main()
{
int incoming,n,outgoing,buffersize,store=0,drop;
printf("\n enter number of packets");
scanf("%d",&n);
printf("\n enter a outgoing packets");
scanf("%d",&outgoing);
printf("\n enter a buffersize:");
scanf("%d",&buffersize);
while(n!=0)
{
printf("\n enter a incoming value:");
scanf("%d",&incoming);
	if(incoming<=(buffersize-store))
      {
       store+=incoming;
      }
        else
            {
            printf("\n packet is dropped %d",incoming-(buffersize-store));
             store=buffersize;
             }
             printf("\n Buffer size is %d  out of %d  \n",store,buffersize);
     store=store-outgoing;
printf("After outgoing  %d packet  left in buffer \n",store);
       n--;
      }
}

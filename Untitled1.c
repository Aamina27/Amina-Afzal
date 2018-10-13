
#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
    int cpid1;
    int cpid2;
    int cpid3;
    int cpid4;
    int cpid5;
    int cpid6;
    int cpid7;
    int cpid8;
    int cpid9;
    int cpid10;
    int p1[2],p2[2],p3[2],p4[2],p5[2],p6[2],p7[2],p8[2],p9[2],p10[2];
    pipe(p1);
    pipe(p2);
    pipe(p3);
    pipe(p4);
    pipe(p5);
    pipe(p6);
    pipe(p7);
    pipe(p8);
    pipe(p9);
    pipe(p10);
    int childsum1=0;
    int childsum2=0;
    int childsum3=0;
    int childsum4=0;
    int childsum5=0;
    int childsum6=0;
    int childsum7=0;
    int childsum8=0;
    int childsum9=0;
    int childsum10=0;
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;
    cpid1=fork();
if(cpid1==0)
{
for(int i=0;i<100;i++)
{
childsum1=childsum1+i;
}
close(p1[0]);
write(p1[1],&childsum1,sizeof(childsum1));
}
else
{
cpid2=fork();
if(cpid2==0)
{

for(int i=100;i<200;i++)
{
childsum2=childsum2+i;
}
close(p2[0]);
write(p2[1],&childsum2,sizeof(childsum2));
}
else
{
cpid3=fork();
if(cpid3==0)
{

for(int i=200;i<300;i++)
{
childsum3=childsum3+i;
}
close(p3[0]);
write(p3[1],&childsum3,sizeof(childsum3));
}
else
{
cpid4=fork();
if(cpid4==0)
{

for(int i=300;i<400;i++)
{
childsum4=childsum4+i;
}
close(p4[0]);
write(p4[1],&childsum4,sizeof(childsum4));
}
else
{
cpid5=fork();
if(cpid5==0)
{

for(int i=400;i<500;i++)
{
childsum5=childsum5+i;
}
close(p5[0]);
write(p5[1],&childsum5,sizeof(childsum5));
}
else
{
cpid6=fork();
if(cpid6==0)
{

for(int i=500;i<600;i++)
{
childsum6=childsum6+i;
}
close(p6[0]);
write(p6[1],&childsum6,sizeof(childsum6));
}
else
{
cpid7=fork();
if(cpid7==0)
{

for(int i=600;i<700;i++)
{
childsum7=childsum7+i;
}
close(p7[0]);
write(p7[1],&childsum7,sizeof(childsum7));
}
else
{
cpid8=fork();
if(cpid8==0)
{

for(int i=700;i<800;i++)
{
childsum8=childsum8+i;
}
close(p8[0]);
write(p8[1],&childsum8,sizeof(childsum8));
}
else
{
cpid9=fork();
if(cpid9==0)
{

for(int i=800;i<900;i++)
{
childsum9=childsum9+i;
}
close(p9[0]);
write(p9[1],&childsum9,sizeof(childsum9));
}
else
{
cpid10=fork();
if(cpid10==0)
{

for(int i=900;i<1000;i++)
{
childsum10=childsum10+i;
}
close(p10[0]);
write(p10[1],&childsum10,sizeof(childsum10));
}
else
{
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);
wait(0);

close(p1[1]);
read(p1[0],&sum1,sizeof(sum1));
close(p2[1]);
read(p2[0],&sum2,sizeof(sum2));
close(p3[1]);
read(p3[0],&sum3,sizeof(sum3));
close(p4[1]);
read(p4[0],&sum4,sizeof(sum4));
close(p5[1]);
read(p5[0],&sum5,sizeof(sum5));
close(p6[1]);
read(p6[0],&sum6,sizeof(sum6));
close(p7[1]);
read(p7[0],&sum7,sizeof(sum7));
close(p8[1]);
read(p8[0],&sum8,sizeof(sum8));
close(p9[1]);
read(p9[0],&sum9,sizeof(sum9));
close(p10[1]);
read(p10[0],&sum10,sizeof(sum10));

printf("%d\n",sum1);
printf("%d\n",sum2);
printf("%d\n",sum3);
printf("%d\n",sum4);
printf("%d\n",sum5);
printf("%d\n",sum6);
printf("%d\n",sum7);
printf("%d\n",sum8);
printf("%d\n",sum9);
printf("%d\n",sum10);


int totalsum;
totalsum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
printf("%d\n",totalsum);

}
}
}
}
}
}
}
}
}
}
return 0;
}

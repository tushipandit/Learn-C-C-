#include<stdio.h>
void main()
{
    int p;
    int bt[50];
    int wt[50];
    int i;
    int avt=0;
    wt[0]=0;
    int tat[50];
    int tavt=0;

    printf("----------------First Come First Serve------------------\n");
    printf("enter the number of processes \t");
    scanf("%d",&p);
    printf("\n");
    printf("-----------------");
    printf("\n");
    printf("enter the brust time for each process \n \n");


    for(i=0;i<p;i++)
    {
    printf("PROCESS %d :  ",i+1);
    scanf("%d",&bt[i]);
    printf("\n");
    }
    printf("--------------- \n \n");

    //waiting time

    printf("waiting time for each process \n \n");

    printf("PROCESS 1 :  ");
    printf("%d \n \n", wt[0]);
    for(i=1;i<p;i++)
    {
    wt[i]=wt[i-1]+bt[i-1];
    printf("PROCESS %d :  ",i+1);
    printf("%d \n \n", wt[i]);
    avt=avt+wt[i];
    }


    printf("Average waiting time : %d \n",avt/p);

    printf("--------------- \n");

    printf("Turnaround time for each process \n \n");

    printf("PROCESS 1 :  ");
    printf("%d \n \n", wt[0]);
    for(i=0;i<p;i++)
    {
    tat[i]=wt[i]+bt[i];
    printf("PROCESS %d :  ",i+1);
    printf("%d \n \n", tat[i]);
    tavt=tavt+tat[i];
    }


    printf("Average Turnaround time : %d \n",tavt/p);

    printf("---------------");




}

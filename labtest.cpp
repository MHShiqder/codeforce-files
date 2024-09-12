#include<iostream>
using namespace std;
int main()
{
    int n,i,j,q_t,count=0,temp,ex=0,p[100],bt[100],at[100],tat[100],wt[100];
    int rem_bt[100];
    float atat=0,awt=0;
    cout<<"Enter process number: ";
    cin>>n;

    cout<<"Enter process sequence: ";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Enter arrival time: ";
    for(i=0;i<n;i++)
    {
        cin>>at[i];
    }
    cout<<"Enter burst time: ";
    for(i=0;i<n;i++)
    {
        cin>>bt[i];
        rem_bt[i] = bt[i];
    }
    cout<<"Enter quantum time: ";
    cin>>q_t;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(at[i] > at[j])
            {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = rem_bt[i];
                rem_bt[i] = rem_bt[j];
                rem_bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;

                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
            }
        }
    }
    while(true)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp = q_t;
            if(rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if(rem_bt[i] > q_t)
            {
                rem_bt[i] = rem_bt[i]-q_t;
            }
            else
            {
                if(rem_bt[i] >= 0)
                {
                    temp = rem_bt[i];
                    rem_bt[i]=0;
                }
            }
            ex+=temp;
            tat[i] = ex-at[i];
        }
        if(n == count)
        {
            break;
        }
    }
    cout<<"\n process\t   arrival time\t  burst time\t turnaround time\twaiting time "<<endl;
    int total_tat=0,total_wt=0;
    for(i=0;i<n;i++)
    {
        total_tat += tat[i];
        wt[i] = tat[i] - bt[i];
        total_wt += wt[i];
        cout<<" p["<<p[i]<<"]\t\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
    }
    atat = total_tat/n;
    awt = total_wt/n;
    cout<<"Average Waiting Time = "<<awt<<endl;
    cout<<"Average Turnaround Time = "<<atat<<endl;

    return 0;
}


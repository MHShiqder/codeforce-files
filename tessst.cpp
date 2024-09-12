#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
    cout<<"Enter the number of Process"<<endl;
	cin>>n;
    int process[n];
    int burst_time[n];

    //taking burst time from the user

   	cout<<"Enter brust time of "<<n<<" process"<<endl;
   	int proc[n];
   	for(int i=0;i<n;i++){
   		cin>>burst_time[i];
   		proc[i] = i+1;
   	}

    //Calculating wait time

  	int  wait_time[n];
  	wait_time[0]=0;
  	 for (int i = 1; i < n ; i++ )
     {
        wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
  	 }

     //Calculating turn around time

  	 int ta_time[n];
  	 for (int i=0;i<n;i++)
     {
         ta_time[i] = burst_time[i] + wait_time[i];
     }

     //Printing the result

  	 cout<<endl<<setw(13)<<"Processes"<<setw(13)<<setw(13)<<"Burst Time"
  	 <<setw(13)<<"Wait Time"<<setw(13)<<"Turn around"<<endl;

  	 int total_wt=0,total_tat=0;
  	 for (int i=0; i<n; i++) {
            total_wt = total_wt + wait_time[i];
     	 	total_tat = total_tat + ta_time[i];
     	 	cout<<setw(13)<<i+1<< setw(13)<<burst_time[i]<<setw(13)
     	 	<<wait_time[i]<<setw(13)<<ta_time[i]<<endl;
  	 }
    cout<<endl;
   	cout<<"Average waiting time = "<<(float)total_wt/(float)n<<endl;
   	cout<<"Average turn around time = "<<(float)total_tat/(float)n<<endl;
   	return 0;
}


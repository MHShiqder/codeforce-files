#include<bits/stdc++.h>
using namespace std;
void findWaitingTime(int n, int brustTime[], int arrivalTime[], int id[],int waitingTime[]){
	int *tempBrust = new int[n];
	for(int i=0;i<n;i++){
		tempBrust[i] = brustTime[i];
	}
	int complete = 0,time = 0, minValue = INT_MAX;
	int shortest = 0, finishTime;
	bool check = false;
	
	while(complete!=n){
		for(int i=0;i<n;i++){
			if((arrivalTime[i]<time)&& (tempBrust[i]<minValue && tempBrust[i]>0)){
				minValue = tempBrust[i];
				shortest = i;
				check = true;
			}
		}
		if(!check){
			time++;
			continue;
		}
		tempBrust[shortest]--;
		minValue = tempBrust[shortest];
		if(minValue==0){
			minValue = INT_MAX;
		}
		if(tempBrust[shortest]==0){
			complete++;
			check = false;
			finishTime = time;
			waitingTime[shortest] = finishTime - brustTime[shortest] - arrivalTime[shortest];			
		}
		time++;
	}
}
void findTAT(int n, int brustTime[], int arrivalTime[], int id[],int TAT[], int waitingTime[]){
	for(int i=0;i<n;i++){
		TAT[i] = brustTime[i] + waitingTime[i]; 
	}
}
void findAvgTime(int n, int brustTime[], int arrivalTime[], int id[]){
	int waitingTime[n];
	int TAT[n];
	float totalWait = 0;
	float totalTAT = 0;
	findWaitingTime(n, brustTime, arrivalTime,id,waitingTime);
	findTAT(n, brustTime, arrivalTime,id,TAT,waitingTime);
	cout<<"Process\t\t"<<"Burst Time\t"<<"Waiting Time\t"<<"Turn Around Time"<<endl;
	for(int i=0;i<n;i++){
		totalWait += waitingTime[i];
		totalTAT += TAT[i];
		cout<<i+1<<"\t\t\t"<<brustTime[i]<<"\t\t"<<waitingTime[i]<<"\t\t"<<TAT[i]<<endl;
	}
	cout<<"Average waiting time : "<<(float)(totalWait/n)<<endl;
	cout<<"Average Turn Around time : "<<(float)(totalTAT/n)<<endl;
	return;
}
int main(){
	int n;
	cout<<"Enter the number of Process:"<<endl;
	cin>>n;
	int id[n];
	int brustTime[n];
	int arrivalTime[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the arrival time of process "<<i+1<<" :"<<endl;
		cin>>arrivalTime[i];
		cout<<"Enter the brust time process "<<i+1<<" : "<<endl;
		cin>>brustTime[i];
		id[i] = i+1;
	}
	
	
	findAvgTime(n,brustTime,arrivalTime,id);
	
	
}

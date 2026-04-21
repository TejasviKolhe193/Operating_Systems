#define MAX_PROCESSES 10
void findWaitingTime(int process[], int n, int bt[], int wt[]){
	int remaining_bt[MAX_PROCESSES];
	for bt[i]=bt[i];
	}
	int current_time=0;
	while(1){
		int min_bt=9999;
		int shortest=1;
		int done=1;
	for(int i=0;i<n;i++){
		if(remaining_bt[i]>0 && remaining_bt[i]<min_bt){
			min_bt=remaining_bt[i];
			shortest=i;
			done=0;
		}
	}
	if(done){
		break;
	}
	wt[shortest]=current_time;
	current_time++;
	remaining_bt[shortest]--;
	}
}
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]){
	for(int i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
	}
}
void calculateAvgTime(int processes[],int n,int  bt[]){
	int  wt[MAX_PROESSES],tat[MAX_PROCESSES];
	int total_wt=0,total_tat=0;
	findWaitingTime(proceses,n,bt,wt);
	findTurnAroundTime(proceses,n,bt,tat);
	for(int i=0;i<n;i++){
		total_wt+=wt[i];
		total_tat+=tat[i];
	}
	printf("process\tBrust time\tWaiting ime\tTurnAroundTime\n");
	for(int i=0;i<n;i++){
		printf("%d\t\t%d\t\t%d\t\t%d\n",processes[i],bt[i],wt[i],tat[i]);
	}
	printf("\nAverage Waiting Time:%.2f\n",(float)total_wt\n);
	printf("Average Turnaround Time: %.2f\n",(float)total_tat/n);
}
int main(){
	int processes[]={1,2,3,4};
	int burst_time[]={6,8,7,3};
	int n=sizeof(processes)/sizeof[0]);

	calculateAverageTimes(processes,n,burst_time);

	return 0;
}

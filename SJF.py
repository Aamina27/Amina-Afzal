burst_time=[]     
print("Enter the number of process: ")
n=int(input())
processes=[]
for i in range(0,n):
 processes.insert(i,i+1)
print("Enter the burst time of the processes: \n")
burst_time=list(map(int, input().split()))
for i in range(0,len(burst_time)-1):  #applying bubble sort to sort process according to their burst time
 for j in range(0,len(burst_time)-i-1):
  if(burst_time[j]>burst_time[j+1]):
   temp=burst_time[j]
   burst_time[j]=burst_time[j+1]
   burst_time[j+1]=temp
   temp=processes[j]
   processes[j]=processes[j+1]
   processes[j+1]=temp
waiting_time=[]    
avg_waiting_time=0  
turnaround_time=[]    
avg_turnaround_time=0   
waiting_time.insert(0,0)
turnaround_time.insert(0,burst_time[0])
for i in range(1,len(burst_time)):  
 waiting_time.insert(i,waiting_time[i-1]+burst_time[i-1])
 turnaround_time.insert(i,waiting_time[i]+burst_time[i])
 avg_waiting_time+=waiting_time[i]
 avg_turnaround_time+=turnaround_time[i]
avg_waiting_time=float(avg_waiting_time)/n
avg_turnaround_time=float(avg_turnaround_time)/n
print("\n")
print("Process\t  Burst Time\t  Waiting Time\t  Turn Around Time")
for i in range(0,n):
 print(str(processes[i])+"\t\t"+str(burst_time[i])+"\t\t"+str(waiting_time[i])+"\t\t"+str(turnaround_time[i]))
 print("\n")
print("Average Waiting time is: "+str(avg_waiting_time))
print("Average Turn Arount Time is: "+str(avg_turnaround_time))
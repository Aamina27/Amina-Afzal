burst_time=[]
print("Enter the number of process: ")
n=int(input())
print("Enter the burst time of the processes: \n")
burst_time=list(map(int, input().split()))
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
 print(str(i)+"\t\t"+str(burst_time[i])+"\t\t"+str(waiting_time[i])+"\t\t"+str(turnaround_time[i]))
 print("\n")
print("Average Waiting time is: "+str(avg_waiting_time))
print("Average Turn Arount Time is: "+str(avg_turnaround_time))
scores=int(input("enter the number of scores"))
arr=[]
sum=0
for i in range(0,scores):
    val=float(input())
    arr.append(val)
min,max=arr[0],arr[0]
for i in range(0,scores):
    if(arr[i]<min):
        min=arr[i]
    if(arr[i]>max):
        max=arr[i]
    sum+=arr[i]

avg=sum/scores
print("maximum score is ",max)
print("minimum score is",min)
print("total point is ",sum)
print("average",avg)

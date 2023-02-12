ele=int(input("enter the number of scores"))
arr=[]

for i in range(0,ele):
    val=float(input())
    arr.append(val)

for i in range(0,ele):
    for j in range(i+1,ele):
        if(arr[i]>arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
print(arr[-2])
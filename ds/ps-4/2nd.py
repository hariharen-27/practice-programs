arr=[5,4,8,9,7]
print("ascending")
for i in range(0,len(arr)):
    for j in range(i+1,len(arr)):
        if(arr[i]>arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
print(arr)

print("decending")
for i in range(len(arr)-1,-1,-1):
    print(arr[i],end=" ")
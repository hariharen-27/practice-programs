n=int(input("enter number of rows to be printed"))
num=1
for i in range(0,n):
    num=1
    for j in range(0,i+1):
        print(num,end=" ")
        num+=1
    print("\r")
        

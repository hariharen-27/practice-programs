import csv
import pandas
with open('employee.csv','r') as file:
    csvfile=csv.DictReader(file)
    list1=[]
    for row in csvfile: 
        r=[row['emp_id'],row['doj'],row['netpay']]
        list1.append(r)
    list1.insert(0,['empid','doj','netpay'])
    print("List:")
    for i in range(len(list1)):
        for j in range(len(list1[0])):
            print(list1[i][j],end=" ")
        print("")

file=pandas.read_csv('employee.csv')
print("\nDATA:")
print(file)
#file.sort_values(["netpay"],axis=0,ascending=[False],inplace=True)
file.sort_values(file.columns[5],axis=0,ascending=[True],inplace=True)
print("\nSORTED DATA:")
print(file)

with open('employee.csv','r') as file:
    csvfile=csv.DictReader(file)
    print("Greater than avg. netpay: ")
    sum1=0
    n=0
    for row in csvfile:
        sum1+=int(row['netpay'])
        n+=1
    avg=sum1//n
with open('employee.csv','r') as file:
    csvfile=csv.DictReader(file)
    for row in csvfile:
        if(int(row['netpay'])>avg):
            print(row)


    




        
        

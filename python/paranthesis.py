stack=[]
expression=input("Enter the expression")
opens="{[("
count=0
for i in expression:
    if i in opens:
        stack.append(i)
        count+=1
        
    else:
        if i==')' and stack.pop()=='(':
            count+=1
        elif i==']' and stack.pop()=='[':
            count+=1
        elif i=='}' and stack.pop()=='{':
            count+=1
            print("poped
if count==len(expression):
    print("True")
else:
    print("False")

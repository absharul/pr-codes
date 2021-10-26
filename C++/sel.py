B = ['h','t','w','c','s','g','l','k','y','u','e']
for i in range (len(B)):
  min_= i
  for j in range (i+1, len(B)):
    if B[min_] > B[j]:
      min_= j
      
B[i],B[min_]  = B[min_], B[i]
print("sorted array is: ")
for i in range(len(B)):
  print(B[i])    

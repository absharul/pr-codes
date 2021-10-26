def insertionsort(arr):
    for i in range(1,len(arr)):
        key = arr[i]
        j=i-1
        while j >=0 and key < arr[j]:
            arr[j+1]=arr[j]
            j -= 1
        arr[j+1] = key

arr = ['t','d','e','o','b','k','l','z','s']
insertionsort(arr)
print("The sorted array is: ")
for i in range (len(arr)):
    print(arr[i])
  
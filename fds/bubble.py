def display(*a):
    for i in range(0, 10):
        print(a[i])

def bubble(*a):
    for i in range(0,10):
        for j in range(i+1,10):

            if (a[j] < a[i]):
                swap = a[i]
                a[i] = a[j]
                a[j] = swap

print("Enter the elements: ")
for i in range(0,10):
    a = int(input())

print("Unsorted elements: ")
display(a)
bubble(a)
print("Sorted elements: ")
display(a)


 def array_element():
      my_array=[5]
      my_array[0]=5
      my_array[1]=4
      my_array[2]=8
      my_array[3]=7
      sum=0
      for i in range(0, len(my_array)):
          sum+=my_array[i]
          print(sum)
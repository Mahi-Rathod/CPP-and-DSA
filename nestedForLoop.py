# import sys
# name = [1,2,3,4,5]

# name2 =[]

# for i in name:
#     name2.append(i)

# print(sys.getsizeof(name))
# print(sys.getsizeof(name2))

# # print(sys.getsizeof(name2))


# *
# **
# ***
# ****
# *****

for i in range(4): #0-5 [0 1 2 3 4 5]
    for j in range(i):
        print("*", end=" ")
    print()
    

# i = 0
#     j ----- range(0)

# i = 1
#     j = 0 range(1)

# i = 2
#     j = 0
#     j = 1
    
# i = 3
#     j = 0
#     j = 1
#     j = 2
    
# i = 4
#     j = 0, 1, 2, 3

# *****
# ****
# ***
# **
# *




# ****
# ****
# ****
# ****

for i in range(4):
    for j in range(5):
        print("*", end=" ")
    print()
    
    
#     *
#    **
#   ***
#  ****
# ***** 

for i in range(1,6):
    for j in range(6-i):
        print(" ",end='')
    
    for j in range(i):
        print('*',end='')
    print()
    

arr = [1,2,3,2,1,4,5,4]

# 1 - 2
# 2 - 2
# 3 - 1
# 4 - 2
# 5 - 1

freq = {}

for i in arr:
    if i in freq:
        freq[i]+= 1
    else:
        freq[i] = 1

print(freq)
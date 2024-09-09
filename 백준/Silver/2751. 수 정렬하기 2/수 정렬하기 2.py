n = int(input())
numbers = list()
for i in range(n):
    a = int(input())
    numbers.append(a)
numbers.sort()
for k in range(n):
    print(numbers[k])
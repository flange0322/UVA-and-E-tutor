cases = int(input())
for i in range(cases):
    num = input()
    print(int(num[0:num.find(' ')]) + int(num[num.find(' ')+1:len(num)]))
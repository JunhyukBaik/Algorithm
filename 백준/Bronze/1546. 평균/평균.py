N = int(input())
avg = 0
score = list(map(int, input().split()))
score.sort()
m = max(score)
for i in range(N):
    score[i] = score[i] / m * 100
for j in range(N):
    avg += score[j]
print(avg/N)
H,W = map(int, input().split())
A = [[int(a) for a in input().split()] for _ in range(H)]
col_sum = [0] * W
row_sum = [0] * H
for h in range(H):
    for w in range(W):
        col_sum[w] += A[h][w]
        row_sum[h] += A[h][w]

ans = [[0]*W for _ in range(H)]
for h in range(H):
    for w in range(W):
        ans[h][w] = col_sum[w] + row_sum[h] - A[h][w]

for a in ans:
    print(*a)



##TLEコード
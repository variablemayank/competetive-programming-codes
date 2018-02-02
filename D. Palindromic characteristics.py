s = input()
n = len(s)

dp = [[0 for i in range(n-leng+1)] for leng in range(n+1)]

ans = [0 for i in range(n+1)]

for leng in range(1,n+1):
     for l in range(0, n-leng +1):
         r = l+ leng
         if s[l]!= s[r-1]:
              continue
        if leng == 1:
             dp[1][l] =1
             ans[1] +=1
        elif le ==2:
             ans[2]+=1
             dp[2][l] =2
        elif dp[leng-2][l+1]:
             var = 1
             mid = (l+r)//2
             right = mid+1 if leng &1 else m
             leng2 = mid -1
             q = dp[leng2][l]
             if q:
                var = q+1

            ans[var] +=1
            dp[leng][l] = var
            
for i in range(n-1,0,-1):
    ans[i] += ans[i+1]

print(*ans[1:])
          

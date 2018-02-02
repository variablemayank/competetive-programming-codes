mod  = 1000000007
prime = [1]*2000000

def sieve():
    prime[0] = prime[1] = 0
    for i in range(2,2000000):
        if prime[i] == 1:
            j = i * i
            while j < 2000000:
                prime[j] = 0
                j += i
    return

    
ncr = [[ 0 for x in range(2000)]for y in range(2000)]

def choose(n,r):
    if r>=0 and r<=n:
        return ncr[n][r]
    else:
        return 0
    
    
def solve():
    isprime = 0
    notprime = 0
    ans =1

    n = int(raw_input())
    arr = list(map(int,raw_input().split()))
    for i in range(n):
           if prime[arr[i]] == 1:
             isprime+=1;
           else:
             notprime += 1

    for take in range(0,isprime+1):
        setsPossible = (choose(isprime,take) * pow(2,notprime,mod-1)) % (mod-1)
        ans = (ans * pow(take + 2, setsPossible, mod)) % mod
    
    print ans

sieve()
ncr[0][0] = ncr[1][0] = ncr[1][1] = 1
for i in range(2,2000):
    ncr[i][i] = ncr[i][0] =1
    for j in range(1,i):
        ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1]) % (mod-1)

cases = int(raw_input())
for case in range(cases):
    solve()
 
                              
                              
    

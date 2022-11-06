def solution(S):
  n, res = len(S), 0
  for i in range(1, n):
    s1, s2 = S[:i], S[i:]
    if len(set(s1)) == len(set(s2)):
      res += 1
  return res
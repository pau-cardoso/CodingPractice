def findJudge(n: int, trust) -> int:
    cont = 1
    for i in range(len(trust)):
        if trust[i][0] == cont:
            continue
        elif trust[i][0] == cont+1:
            cont = cont+1
        else:
            return cont+1
    if cont < n:
        return n
    return -1

if __name__ == '__main__':
    # n = 2
    # trust = [[1,2]]
    # Output 2
    n = 4 
    trust = [[1,3],[1,4],[2,3],[2,4],[4,3]]
    findJudge(n, trust)
    #Output: 3
HashMap = ["", 
           "", 
           "abc", 
           "def", 
           "ghi",
           "jkl",
           "mno",
           "pqrs", 
           "tuv", 
           "wxyz"]
 

 
def helper(data, curr, ans, n):
    if(curr == n):
        print(ans)
        return
 

    for i in range(len(HashMap[data[curr]])):
        
        ans.append(HashMap[data[curr]][i])
        
        helper(data, curr + 1, ans, n)
        
        
        ans.pop()
        
        if(data[curr] == 0 or data[curr] == 1):
            return
 

 
def phone(data, n):
    helper(data, 0, [], n)
 
data = [2, 4,5]
n = len(data)
phone(data, n)
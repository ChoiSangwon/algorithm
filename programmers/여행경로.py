def solution(tickets):
    tickets.sort(reverse=True)
    routes = {}
    
    for start,end in tickets:
        if start in routes:
            routes[start].append(end)
        else:
            routes[start] = [end]
    stack = ["ICN"]
    path = []
    
    while stack:
        top = stack[-1]
        if top in routes and routes[top]:
            stack.append(routes[top].pop())  
        else:
            path.append(stack.pop())  
    
    return path[::-1]  
    
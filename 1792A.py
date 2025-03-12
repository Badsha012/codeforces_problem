def elevator_choice(test_cases):
    results = []
    for a, b, c in test_cases:
        time_first = abs(a - 1)
        time_second = abs(b - c) + abs(c - 1)
        
        if time_first < time_second:
            results.append(1)
        elif time_first > time_second:
            results.append(2)
        else:
            results.append(3)
    
    return results

# Read input
t = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(t)]

# Get results
results = elevator_choice(test_cases)

# Print result       
for result in results:
    print(result)
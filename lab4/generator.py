def square_generator(N):
    for i in range(N + 1):
        yield i ** 2
N = int(input("enter number for square numbers:"))
for num in square_generator(N):
    print(num, end=" ")  
print()
n = int(input("enter the number for even numbers:"))
def even_nums(n):
    for i in range(n):
        if i%2==0:
            yield i
print(*even_nums(n), sep = ", ")
n = int(input("enter number for 3 4 divisible:"))
def div(n):
    for i in range(n):
        if i%3==0 and i%4==0:
            yield i
print(*div(n), sep = ", ")
def squares(a, b):
    for i in range(a, b):
        yield i**2
print("square numbers between a and b:", *squares(4, 8))
n = int(input("enter number for list of:"))
def lst(n):
    for i in range(n+1):
        yield n - i
print(*lst(n), sep = ", ")
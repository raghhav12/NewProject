import random


def game(a,b):
    if a==b:
        return None
    if a ==1:
        if b==2:
            return True
        elif b==3:
            return False
    elif a==2:
        if b==1:
            return False
        elif b==3:
            return True
    elif a==3:
        if b==1:
            return True
        elif b==2:
            return False
    


print("choose snake(1), water(2) or gun(3)\n")
you = int(input())
comp = random.randint(1,3)

if you==1:
    y= "snake"
elif you==2:
    y="water"
elif you==3:
    y="gun"
print(f"you choose {y}")

if comp==1:
    c= "snake"
elif comp==2:
    c="water"
elif comp==3:
    c="gun"
print(f"computer choose {c}")

result = game(you,comp)

if result:
    print("you won")
elif result == None:
    print("tie")
else:
    print("you lose")



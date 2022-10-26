import turtle
turtle.shape('turtle')
turtle.left(90)

def sircleR(a):
    for i in range(36):
        turtle.forward(a)
        turtle.left(10)


def sircleL(a):
    for i in range(36):
        turtle.forward(a)
        turtle.right(10)


def halfSircle(a):
    for i in range(18):
        turtle.forward(a)
        turtle.right(10)


def star(n):
    for i in range(n):
        turtle.forward(50)
        turtle.right(180-180/n)

star(5)
turtle.forward(35)
star(11)


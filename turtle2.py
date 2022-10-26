import turtle
turtle.shape('turtle')
s = 10
while True:

    for i in range(4):
        turtle.forward(s)
        turtle.left(90)
    turtle.penup()
    turtle.right(135)
    turtle.forward(10*2**0.5)
    turtle.left(135)
    turtle.pendown()
    s += 20

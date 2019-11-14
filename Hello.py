from turtle import *

def move_turtle():
    penup()
    goto(-200, 100)
    pendown()
move_turtle()

space_width = 10 #Default value: 10
letter_height = 50 #Default value: 50
letter_width = 30 #Default value: 30
pen_color = input("Enter a color name to set the pen color:")
pen_width = input("Enter a number from 1-10 to set the pen width:")
color(pen_color)
width(pen_width)
def draw_H():
    #Draw an H.
    left(90)
    forward(letter_height)
    forward(-letter_width)
    right(90)
    forward(letter_width)
    left(90)
    forward(letter_width)
    forward(-letter_height)
    right(90)
    add_space()
    # The H is drawn
    #The turtle is at the bottom right, pointing right.
def add_space():
    #add a space 30 pixels wide.
    penup()
    forward(30)
    pendown()
add_space()

def draw_E():
    #Draw an E.
    left(90)
    forward(letter_height)
    right(90)
    forward(letter_width)
    forward(-letter_width)
    right(90)
    forward(letter_height/2)
    left(90)
    forward(letter_width)
    forward(-letter_width)
    right(90)
    forward(letter_height/2)
    left(90)
    forward(letter_width)
    #The E is drawn.
    add_space()
    
def draw_L():
    #Draw an L.
    left(90)
    forward(letter_height)
    forward(-letter_height)
    right(90)
    forward(letter_width)
    add_space()

def draw_O():
    #Draw an o.
    forward(letter_width)
    left(90)
    forward(letter_height)
    left(90)
    forward(letter_width)
    left(90)
    forward(letter_height)
    left(90)
    forward(letter_width)
    add_space()
draw_H()
draw_E()
draw_L()
draw_L()
draw_O()




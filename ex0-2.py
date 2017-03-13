import SimpleGUICS2Pygame.simpleguics2pygame as simplegui

width = 700
height = 700

pos = (width/2, height/2)
ball_rad = 50


def rec(canvas, pos, ball_rad, step):
    canvas.draw_circle(pos, ball_rad, 1, "black")

    if step < 5:
        rec(canvas, (pos[0] - ball_rad * 3, pos[1]), ball_rad / 2.5, step + 1)
        rec(canvas, (pos[0] + ball_rad * 3, pos[1]), ball_rad / 2.5, step + 1)
        rec(canvas, (pos[0], pos[1] - ball_rad * 3), ball_rad / 2.5, step + 1)
        rec(canvas, (pos[0], pos[1] + ball_rad * 3), ball_rad / 2.5, step + 1)


def draw(canvas):
    rec(canvas, pos, ball_rad, 0)


frame = simplegui.create_frame("ff", width, height)
frame.set_draw_handler(draw)
frame.set_canvas_background("white")
frame.start()

import pyautogui as pg
import time
limit = input("Enter limit: ")
message = input("Enter Message: ")
i=0
time.sleep(5)
while i<int(limit):
    pg.typewrite(message)
    pg.press("Enter")
    i+=1
    
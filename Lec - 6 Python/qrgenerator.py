import os
import qrcode

img = qrcode.make("https://github.com/arifhasnat3po")

img.save("qr.png","PNG")
os.system("Open qr.png")
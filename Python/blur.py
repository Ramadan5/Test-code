from PIL import Image, ImageFilter

before = Image.open("bridge.jpg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("bridgeBlurred.jpg")
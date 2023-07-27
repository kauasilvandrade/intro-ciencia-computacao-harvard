from PIL import Image, ImageFilter

before = Image.open("bridge.jpg")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.jpg")
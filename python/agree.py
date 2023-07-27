from cs50 import get_string

s = get_string("Você concorda: ")

if s.lower() in ["y", "yes"]:
    print("Você concorda!")P
elif s.lower() in ["n", "no"]:
    print("Você concorda!")
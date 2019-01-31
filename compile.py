import os, os.path
res = os.system('gcc -std=c99 ex7.c -o ex1 2>error.txt')
if res == 0:
	print("successful")
else:
    a = open("error.txt", "r")
    c1 = a.read()
    print(c1)

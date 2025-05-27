dict_c = {"a" : 100 , "b" : 200 , "c" : 300 , "d" : 400}

print(type(dict_c.keys()))
# dict_c.pop()

def main():
    li = [i * 2 if i % 2 == 0 else i for i in range(101)]
    print(li)
    
main()
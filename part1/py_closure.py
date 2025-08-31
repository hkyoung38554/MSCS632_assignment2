# file: py_closure.py
def make_adders():
    adders = []
    for k in range(3):
        def add(x, k=k):   # bind k as default
            return x + k
        adders.append(add)
    return adders

f, g, h = make_adders()
print(f(10), g(10), h(10))

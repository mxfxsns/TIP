from math import *
#№1
print(-(0.9*log2(0.9)+0.08*log2(0.08)+0.02*log2(0.02)), 'Бит') 
# По энтропии
#№2


for i in bin(int('77', 8))[:2:-1]:
    print(i)
import time
from numpy.random import choice
print(time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(time.time())))
sample = choice(['R','G','B'], size=100, p=[0.2, 0.5, 0.3])
print(sample)


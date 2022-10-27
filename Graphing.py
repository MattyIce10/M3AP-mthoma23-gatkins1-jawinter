import matplotlib.pyplot as plt
import os
import platform
import subprocess
from subprocess import Popen, PIPE, check_output
import time


for size in range(100, 1001, 100):
	times = []
	with open('../data/bubbleReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)

ax.bar(sizes, times, width=75, color='b', align='center')

# Graphing
plt.gcf().canvas.manager.set_window_title('Bubble Sort Read Graph')
plt.title('Bubble Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/NumberBubbleReads.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/bubbleWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Bubble Sort Write Graph')

# Graphing
plt.title('Bubble Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/BubbleWriteTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/insertionReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='b', align='center')
plt.gcf().canvas.manager.set_window_title('Insertion Sort Read Graph')
# Graphing
plt.title('Insertion Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/Insertion ReadTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/insertionWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Insertion Sort Write Graph')

# Graphing
plt.title('Insertion Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/InsertionWriteTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/mergeReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='b', align='center')
plt.gcf().canvas.manager.set_window_title('Merge Sort Write Graph')

# Graphing
plt.title('Merge Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/MergeReadTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/mergeWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Merge Sort Write Graph')

# Graphing
plt.title('Merge Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/MergeWriteTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/heapReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='b', align='center')
plt.gcf().canvas.manager.set_window_title('Heap Sort Read Graph')

# Graphing
plt.title('Heap Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/HeapReadTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/heapWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Heap Sort Write Graph')

# Graphing
plt.title('Heap Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/HeapWriteTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/selectionReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='b', align='center')
plt.gcf().canvas.manager.set_window_title('Selection Sort Read Graph')

# Graphing
plt.title('Selection Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/SelectionReadTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/selectionWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Selection Sort Write Graph')

# Graphing
plt.title('Selection Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/SelectionWriteTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/quickReads.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='b', align='center')
plt.gcf().canvas.manager.set_window_title('Quick Sort Read Graph')

# Graphing
plt.title('Quick Sort Read Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Reads')
plt.savefig('../images/QuickReadTimes.png')
plt.show()

for size in range(100, 1001, 100):
	times = []
	with open('../data/quickWrites.txt') as file:
		for line in file:
			times.append(int(line))

sizes = range(100, 1001, 100)
ax = plt.subplot(111)
ax.bar(sizes, times, width=75, color='g', align='center')
plt.gcf().canvas.manager.set_window_title('Quick Sort Write Graph')

# Graphing
plt.title('Quick Sort Write Data')
plt.xlabel('Number of Objects to Sort')
plt.xticks(sizes)
plt.ylabel('Number of Writes')
plt.savefig('../images/QuickWriteTimes.png')
plt.show()
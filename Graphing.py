import matplotlib.pyplot as plt
import os
import platform
import subprocess
from subprocess import Popen, PIPE, check_output
import time

for size in range(100, 1001, 100):
	with open('data/bubbleReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')
		plt.gcf().canvas.manager.set_window_title('Speed Test')

		# Graphing
		plt.title('Bubble Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('BubbleReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/bubbleWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Bubble Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('BubbleWriteTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/insertionReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')

		# Graphing
		plt.title('Insertion Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('Insertion ReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/insertionWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Insertion Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('InsertionWriteTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/mergeReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')

		# Graphing
		plt.title('Merge Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('MergeReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/mergeWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Merge Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('MergeWriteTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/heapReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')

		# Graphing
		plt.title('Heap Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('HeapReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/heapWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Heap Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('HeapWriteTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/selectionReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')

		# Graphing
		plt.title('Selection Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('SelectionReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/selectionWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Selection Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('SelectionWriteTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/quickReads.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='b', align='center')

		# Graphing
		plt.title('Quick Sort Read Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('QuickReadTimes.png')
		plt.show()

for size in range(100, 1001, 100):
	with open('data/quickWrites.txt') as file:
		times = [int(next(file)) for x in range(size)]
		sizes = range(100, 1001, 100)
		ax = plt.subplot(111)
		ax.bar(sizes, times, width=300, color='g', align='center')

		# Graphing
		plt.title('Quick Sort Write Data')
		plt.xlabel('Number of Objects to Sort')
		plt.xticks(sizes)
		plt.ylabel('Sort Times in Seconds')
		plt.savefig('QuickWriteTimes.png')
		plt.show()
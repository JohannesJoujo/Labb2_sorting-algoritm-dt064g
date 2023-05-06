import matplotlib.pyplot as plt

# Open the text file and read the lines
with open('/Users/JohannesJoujo/CLionProjects/Labb2_sorting/cmake-build-release/Sort.txt', 'r') as file:
    lines = file.readlines()

# Initialize empty lists for the data
N_insertion_sort = []
T_insertion_sort = []
Stdev_insertion_sort = []

N_selection_sort = []
T_selection_sort = []
Stdev_selection_sort = []

N_quickSort = []
T_quickSort = []
Stdev_quickSort = []

N_quickSort_m3 = []
T_quickSort_m3 = []
Stdev_quickSort_m3 = []

# Loop through the lines and extract the data
for line in lines:
    if line.startswith('insertion_sort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('selection_sort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('quickSort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('quickSort_m3'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue

    parts = line.split('\t')
    N_insertion_sort.append(int(parts[0]))
    T_insertion_sort.append(float(parts[1]))
    Stdev_insertion_sort.append(float(parts[2]))

# Plot the data
plt.errorbar(N_insertion_sort, T_insertion_sort, yerr=Stdev_insertion_sort, fmt='o', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('Insertion_sort')
plt.show()

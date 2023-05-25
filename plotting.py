import matplotlib.pyplot as plt

# Open the text file and read the lines
with open('/Users/JohannesJoujo/CLionProjects/Labb2_sorting/cmake-build-release/Sort.txt', 'r') as file:
    lines = file.readlines()

# Initialize empty lists for the data
N_insertion_sort = []
Lable_insertion_sort = []
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

N_std_sort = []
T_std_sort = []
Stdev_std_sort = []

# Loop through the lines and extract the data
for line in lines:
    if line.startswith('insertion_sort'):
        parts = line.split('\t')
        Lable_insertion_sort.append(parts[0])
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('a'):
        parts = line.split('\t')
        N_insertion_sort.append(int(parts[1]))
        T_insertion_sort.append(float(parts[2]))
        Stdev_insertion_sort.append(float(parts[3]))

    if line.startswith('selection_sort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('b'):
        parts = line.split('\t')
        N_selection_sort.append(int(parts[1]))
        T_selection_sort.append(float(parts[2]))
        Stdev_selection_sort.append(float(parts[3]))

    if line.startswith('quickSort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('c'):
        parts = line.split('\t')
        N_quickSort.append(int(parts[1]))
        T_quickSort.append(float(parts[2]))
        Stdev_quickSort.append(float(parts[3]))

    if line.startswith('quickSort_m3'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('d'):
        parts = line.split('\t')
        N_quickSort_m3.append(int(parts[1]))
        T_quickSort_m3.append(float(parts[2]))
        Stdev_quickSort_m3.append(float(parts[3]))
    if line.startswith('std::sort'):
        continue
    if line.startswith('N'):
        continue
    if line.startswith('\n'):
        continue
    if line.startswith('e'):
        parts = line.split('\t')
        N_std_sort.append(int(parts[1]))
        T_std_sort.append(float(parts[2]))
        Stdev_std_sort.append(float(parts[3]))

# Plot the data for Insertion Sort
plt.errorbar(N_insertion_sort, T_insertion_sort, yerr=Stdev_insertion_sort, fmt='o-', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('Insertion Sort')

# Plot the data for Selection Sort
plt.figure()  # Create a new figure
plt.errorbar(N_selection_sort, T_selection_sort, yerr=Stdev_selection_sort, fmt='o-', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('Selection Sort')

# Plot the data for QuickSort
plt.figure()  # Create a new figure
plt.errorbar(N_quickSort, T_quickSort, yerr=Stdev_quickSort, fmt='o-', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('QuickSort')

# Plot the data for QuickSort with median-of-three partitioning
plt.figure()  # Create a new figure
plt.errorbar(N_quickSort_m3, T_quickSort_m3, yerr=Stdev_quickSort_m3, fmt='o-', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('QuickSort with median-of-three partitioning')

# Plot the data for QuickSort with median-of-three partitioning
plt.figure()  # Create a new figure
plt.errorbar(N_std_sort, T_std_sort, yerr=Stdev_std_sort, fmt='o-', ecolor='red')
plt.xlabel('N')
plt.ylabel('Time [ms]')
plt.title('std::sort')

# Display all the graphs together
plt.show()

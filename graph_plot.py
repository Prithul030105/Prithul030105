import matplotlib.pyplot as plt
import numpy as np


sizes = [1000,10000,100000,1000000]  # Array sizes
times = [0,20109,24981,34253]  # Time in nanoseconds

# Convert times to seconds for better readability
times_seconds = np.array(times) / 1e9

# Create the plot
plt.figure(figsize=(10, 6))
plt.plot(sizes, times_seconds, marker='o', linestyle='-', color='b')

# Set plot labels and title
plt.xlabel('Array Size')
plt.ylabel('Time (seconds)')
plt.title('Time Complexity of Array Operations')
plt.xscale('log')  # Use a logarithmic scale for better visualization of large sizes
plt.yscale('log')  # Use a logarithmic scale for better visualization of time
plt.grid(True, which='both', linestyle='--', linewidth=0.5)
plt.show()


# import matplotlib.pyplot as plt
# import numpy as np

# # Example data points
# sizes = [1000, 10000, 100000, 1000000]  # Array sizes
# times = [0, 0, 0, 4294, 9845]  # Time in nanoseconds

# # Convert times to seconds
# times_seconds = np.array(times) / 1e9

# # Plot
# plt.figure(figsize=(10, 6))
# plt.plot(sizes, times_seconds, marker='o', linestyle='-', color='b')
# plt.xlabel('Array Size')
# plt.ylabel('Time (seconds)')
# plt.title('Time Complexity of Array Operations')
# plt.xscale('log')
# plt.yscale('log')
# plt.grid(True, which='both', linestyle='--', linewidth=0.5)
# plt.show()


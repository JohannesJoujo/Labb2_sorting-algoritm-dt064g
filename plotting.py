import numpy as np
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt

# Load the data from a text file
data = np.loadtxt('cmake-build-debug/quickSort_m3.txt', skiprows=2, usecols=(1, 2))

# Split the data into independent and dependent variables
X = data[:, :-1]
y = data[:, -1]

# Create a linear regression model
model = LinearRegression()

# Train the model using the data
model.fit(X, y)

# Print the coefficients of the linear regression line
print('Coefficients:', model.coef_)

# Predict the dependent variable using the model
y_pred = model.predict(X)

# Plot the results
plt.scatter(X[:, 0], y)
plt.plot(X[:, 0], y_pred, color='red')
plt.xlabel('Independent variable')
plt.ylabel('Dependent variable')
plt.show()

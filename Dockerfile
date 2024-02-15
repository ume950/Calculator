# Use the official gcc image as the base image
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy the calculator.cpp file from the current directory to the container's /app directory
COPY calculator.cpp /calculator.cpp

# Compile the calculator.cpp file using g++
RUN g++ -o calculator calculator.cpp

# Specify the command to run the executable when the container starts
CMD ["./calculator"]

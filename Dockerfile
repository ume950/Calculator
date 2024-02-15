# Use an appropriate base image with necessary dependencies
FROM ubuntu:latest

# Install required build tools and libraries
RUN apt-get update && \
    apt-get install -y build-essential

# Copy the source code file into the container
COPY calculator.cpp /app/

# Set the working directory
WORKDIR /app

# Compile the C++ code into an executable binary
RUN g++ -o calculator calculator.cpp

# Set the entry point for the container
CMD ["./calculator"]

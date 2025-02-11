# Hello World Kernel Module

This is a simple Linux kernel module that prints messages to the kernel log when loaded and unloaded.

## Description

- **Author:** Proxy
- **Version:** 1.1
- **License:** GPL
- **Description:** A Simple Kernel Module that prints messages to the kernel log when loaded and unloaded.

## Files

- **`hello_world.c`**: The source code for the kernel module.
- **`Makefile`**: The makefile to build the kernel module.

## Usage

### Building the Module
To build the kernel module, run the following command:

```sh
make
```
This will compile the module and generate the hello_world.ko kernel module file.

### Loading the Module
To load the kernel module, use the following command:

```sh
sudo insmod hello_world.ko
```
After loading the module, check the kernel log to see the output:

```sh
dmesg | tail
```
### You should see:
Saying Hello from Proxy_021 ...

### Unloading the Module
To unload the kernel module, use the following command:

```sh
sudo rmmod hello_world
```
### Check the kernel log again:

```sh
dmesg | tail
```

### You should see:
Good bye ! Finally You Runned Your First kernel!!

### Cleaning Up
To clean up the build files, run the following command:

```sh
make clean
```
This will remove the generated kernel object files and other build artifacts.

### Example Output
When the module is loaded, it will print the following message to the kernel log:
Saying Hello from Proxy_021 ...

When the module is unloaded, it will print the following message to the kernel log:
Good bye ! Finally You Runned Your First kernel!!

Video Demonstration
A video demonstrating the building, loading, and unloading of this kernel module is available. [Insert Link to Video]
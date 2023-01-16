# praiselang

praiselang is a lightweight encryption/decryption algorithm that uses Base64 and praiselang substitution algorithm together.

## Programming Language and Tools

Programming Language: C, Bash <br>
Compiler: GNU GCC <br>
Build Tool: CMake 

## Dependencies

CMake (MIN 3.22)

## Installation

### Step 1: Download the Source codes

https://github.com/MertGunduz/praiselang

### Step 2: Change permissions of INSTALL.sh

```sh
chmod 755 INSTALL.sh
```
running this command will change the permission of the INSTALL.sh

### Step 3: Run INSTALL.sh

```sh
./INSTALL.sh
```
running this bash file will build the application
##### Note: it can ask for sudo permission

### Step 4: Test Application

try running
```sh
praiselang -h
```
if there are some output related to praiselang then it means it is successfully builded

## How to use

### Encrypting Text

```sh
praiselang -e [DATA]
praiselang --encrypt [DATA]
```
encrypts the given data

### Decrypting Text

```sh
praiselang -d [DATA]
praiselang --decrypt [DATA]
```
decrypts the given encrypted data

### Help

```sh
praiselang -h
praiselang --help
```
outputs a detailed manuel about praiselang

### Showing Version

```sh
praiselang -v
praiselang --version
```
outputs the version of praiselang

### Showing Github

```sh
praiselang -g
praiselang --github
```
outputs the source code link of praiselang

## Encryption/Decryption Examples

### Encrypting String

```sh
praiselang -e hello
```
#### OUTPUT: 
> Tmljb25NZWdhbGVzaXVzQXN0YXJvdGhBc3Rhcm90aFNvbmVpbGxvbg==

### Decrypting String

```sh
praiselang -d Tmljb25NZWdhbGVzaXVzQXN0YXJvdGhBc3Rhcm90aFNvbmVpbGxvbg==
```

#### OUTPUT:
> hello
